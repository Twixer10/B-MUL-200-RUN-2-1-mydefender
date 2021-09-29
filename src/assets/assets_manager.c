/*
** EPITECH PROJECT, 2021
** assets manager
** File description:
** manage asset
*/

#include "../../include/defender.h"

void load_assets(game_t *game)
{
    game->textures.menu_background = sfTexture_createFromFile(
        "./assets/menu/background.jpg", NULL);
}