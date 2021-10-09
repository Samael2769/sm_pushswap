/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** push_in_list
*/

#include "liste.h"
#include "sm_liblist.h"

linked_t push_in_list(char **av)
{
    linked_t liste = create_node(av[0]);
    linked_t list = liste;

    for (int i = 1; av[i]; ++i) {
        list->next = create_node(av[i]);
        list = list->next;
    }
    return liste;
}