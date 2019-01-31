#include "lib.h"
#include <stdio.h>
#include <string.h>


int         my_ls_l(char **argv)
{
    *argv = *argv + 0;
    return 0;
}

int         my_ls_R(char **argv)
{
    *argv = *argv + 0;
    return 0;
}

int         my_ls_r(char **argv)
{
    *argv = *argv + 0;
    return 0;
}

int         my_ls_a(char **argv)
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
    return (0);
}

int         my_ls_a_bis(char **argv)
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
            if(!my_strcmp(read->d_name,".") || !my_strcmp(read->d_name,".."))
                my_putstr("");
            else
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
    return (0);
}