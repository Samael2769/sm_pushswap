/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** free_list
*/

#include "liste.h"
#include <stdlib.h>

void free_list(linked_t list)
{
    linked_t dup = NULL;

    for (; list != NULL; list = dup) {
        dup = list->next;
        free(list);
    }
}