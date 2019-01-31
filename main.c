#include "fonction/lib.h"

static const t_option tab[] = {
        {"l", &my_ls_l},
        {"a", &my_ls_a},
        {"A", &my_ls_a_bis},
        {"R", &my_ls_R},
        {"L", &my_ls_L},
        {"r", &my_ls_r},
        {"d", &my_ls_d},
        {"t", &my_ls_t},
        {NULL, NULL}
};

int         main(int argc, char **argv)
{
    int     c;
    int     i;
    char    *pChar;

    i = 0;
    pChar = malloc(sizeof(char));
    while ((c = getopt(argc, argv, "lRrdtaAL:")) != -1)
    {
        *pChar = (char) c;
        while (tab[i].str != NULL)
        {
            if (my_strcmp(tab[i].str, pChar) == 0)
            {
                tab[i].pointerFunctionRepair(&argv[2]);
                free(pChar);
                return 1;
            }
            i++;
        }
    }
    my_ls_path(&argv[1]);
    free(pChar);
    return (0);
}