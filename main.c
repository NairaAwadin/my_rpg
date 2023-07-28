/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "my.h"

int main (int ac, char **av)
{
    my_rpg *rpg = malloc (sizeof(my_rpg));
    my_box *box = malloc (sizeof(my_box));
    if (ac == 1)
        menu(rpg, box);

    free(rpg);
    return 0;
}
