#ifndef _MYLIB_H_
# define _MYLIB_H_

#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>
#include <getopt.h>
#include <stdlib.h>

typedef struct      s_option
{
    char            *str;
    int             (*pointerFunctionRepair)(char **argv);
}                   t_option;

void            my_putchar(char c);
void            my_putstr(char *str);
void            my_ls_path(char **argv);
int             my_ls_l(char **argv);
int             my_ls_a(char **argv);
int             my_ls_a_bis(char **argv);
int			    my_strcmp(char *s1, char *s2);
int             my_ls_L(char **argv);
int             my_ls_d(char **argv);
int             my_ls_t(char **argv);
int             my_ls_r(char **argv);
int             my_ls_R(char **argv);



#endif


