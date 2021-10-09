/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** pushswap
*/

#include "sm_libc.h"
#include "sm_liblist.h"
#include "pushswap.h"
#include "sorting.h"
#include "sorting_tab.h"

int pushswap(char **tab)
{
    linked_t list;

    if (error_handling(tab + 1) != 0)
        return -1;
    list = push_in_list(tab + 1);
    for (int i = 0; i < tab_size; ++i) {
        if (sm_strcmp(tab[0], sorting_tab[i].name) == 0) {
            sorting_tab[i].ptr(list);
        }
    }
    display_list(list);
    return 0;
}