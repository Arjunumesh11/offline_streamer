#include "serve_static.h"
using namespace serve_static;

serve_static::servestatic::servestatic(std::string folder)
{
    if (serve_static::servestatic::_root_folder.create_directory(folder) < 0)
    {
        fprintf(stderr, "NO DIRECTOR FOUND file() : %s\n", std::strerror(errno));
        exit(EXIT_FAILURE);
    }
    servestatic::file_paths = serve_static::servestatic::_root_folder.get_paths();
}

int serve_static::servestatic::create_directory(std::string folder)
{
    if (serve_static::servestatic::_root_folder.create_directory(folder) < 0)
    {
        return -1;
    }
    servestatic::file_paths = serve_static::servestatic::_root_folder.get_paths();
    return 0;
}

int serve_static::servestatic::serve(std::string response, int new_socket)
{
    return 0;
}