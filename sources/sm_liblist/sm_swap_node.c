/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_swap_node
*/

#include "liste.h"

void swap_node(linked_t node1, linked_t node2)
{
    int tmp = node1->id;

    node1->id = node2->id;
    node2->id = tmp;
}