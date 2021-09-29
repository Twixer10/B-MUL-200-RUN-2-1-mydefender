/*
** EPITECH PROJECT, 2021
** LOOP MENU
** File description:
** INSTANCE OF MENU
*/

#include "../../include/defender.h"

void loop_menu(game_t *game)
{
    display_background(game);
    while (sfRenderWindow_pollEvent(game->window, &game->event)) {

    }
}