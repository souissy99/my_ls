#include "lib.h"


void         my_ls_path(char **argv)
{
    struct  dirent *read;
    DIR *rep;

    if (*argv == NULL)
        rep = opendir(".");
    else
        rep = opendir(*argv);
    if (rep)
    {
        while ((read = readdir(rep)))
        {
            if (read->d_name[0] != '.')
                my_putstr(read->d_name);
            my_putstr("   ");
        }
        my_putstr("\n");
        closedir(rep);
    }
    else
    {
        my_putstr("Cannot open directory ");
        my_putstr(*argv);
        my_putstr("\n");
    }
}

int        my_ls_L(char **argv)
{
    *argv = *argv + 0;
    return (0);
}

int        my_ls_d(char **argv)
{
    *argv = *argv + 0;
    return (0);
}

int        my_ls_t(char **argv)
{
    *argv = *argv + 0;
    return (0);
}
