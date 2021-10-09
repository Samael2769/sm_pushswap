/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** main
*/
#include "pushswap.h"

int main(int ac, char ** av)
{
    if (ac < 3)
        return 84;
    if (pushswap(av + 1) != 0)
        return 84;
    return 0;
}