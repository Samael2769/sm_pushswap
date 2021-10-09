/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** bubble_sort
*/

#include "liste.h"
#include "sm_liblist.h"
#include <stddef.h>

int bubble_sort(linked_t list)
{
    linked_t dup = list;
    linked_t llist = NULL;
    int tmp = 0;

    do {
        tmp = 0;
        dup = list;
        while (dup->next != llist) {
            if (dup->id > dup->next->id) {
                swap_node(dup, dup->next);
                tmp = 1;
            }
            dup = dup->next;
        }
        llist = dup;
    } while (tmp);
    return 0;
}