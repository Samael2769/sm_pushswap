/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** display_list
*/

#include "liste.h"
#include "stdio.h"
#include "sm_libc.h"

void display_list(linked_t list)
{
    linked_t tamp = list;

    for (; tamp->next != NULL; tamp = tamp->next) 
        sm_printf("%d ", tamp->id);
    sm_printf("%d ", tamp->id);    
}