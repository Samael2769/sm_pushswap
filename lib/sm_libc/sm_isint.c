/*
** EPITECH PROJECT, 2021
** Untitled (Workspace)
** File description:
** sm_isint
*/

int sm_isint(char const *str)
{
    for (int i = 0; str[i]; ++i)
        if ((str[i] < '0' || str[i] > '9') && str[i] != '-')
            return -1;
    return 0;
}