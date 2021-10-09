/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** create_node
*/

#include "liste.h"
#include <stdlib.h>
#include "sm_libc.h"

cell_t *create_node(char *nb)
{
    cell_t *node = malloc(sizeof(cell_t));
    node->id = sm_atoi(nb);
    node->next = NULL;
    return node;
}