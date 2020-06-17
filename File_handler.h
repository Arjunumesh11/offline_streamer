#ifndef _file_handler
#define _file_handler

#include <ftw.h>
#include <dirent.h>
#include <fnmatch.h>
#include <string>
#include <sys/stat.h>
#include <sys/types.h>
#include <list>
#include <unordered_map>

struct stat sb;
namespace file_handler
{
    class file
    {
    public:
        //create directory
        //      @param : std::string root_folder
        //      @return :-1 if not successfull
        int create_directory(std::string root_folder);

        //get file_list
        //     @param : none
        //     @return : std::list<string> filelist
        std::list<std::string> get_filelist();

        //get file name,path
        //    @param : std::string filename
        //    @return : std::string filepath
        std::string get_file(std::string filename);

    private:
        static int parser(const char *fpath, const struct stat *sb, int typeflag);
        static std::unordered_map<std::string, std::string> file_list;
        int a;
    };
} // namespace file_handler

#endif