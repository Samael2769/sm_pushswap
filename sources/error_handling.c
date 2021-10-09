/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** error_handling
*/

#include "sm_libc.h"

int error_handling(char ** tab)
{
    for (int i = 0; tab[i]; ++i)
        if (sm_isint(tab[i]) != 0)
            return -1;
    return 0;
}