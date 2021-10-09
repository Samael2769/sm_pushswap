/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sorting_tab
*/

#ifndef SORTING_TAB_H_
#define SORTING_TAB_H_

#include "liste.h"
#include "sorting.h"

typedef struct sorting_s {
    char *name;
    int (*ptr)(linked_t list);
} sorting_t;

static const sorting_t sorting_tab[] = {
    {.name = "bubble", bubble_sort}
};

static int tab_size = sizeof(sorting_tab) / sizeof(sorting_tab[0]);

#endif /* !SORTING_TAB_H_ */
