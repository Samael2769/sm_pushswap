/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_liblist
*/

#ifndef SM_LIBLIST_H_
#define SM_LIBLIST_H_

#include "liste.h"

cell_t *create_node(char *nb);
void display_list(linked_t list);
void free_list(linked_t list);
void swap_node(linked_t node1, linked_t node2);

#endif /* !SM_LIBLIST_H_ */