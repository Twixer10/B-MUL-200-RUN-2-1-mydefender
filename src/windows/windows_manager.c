/*
** EPITECH PROJECT, 2021
** Windows manager
** File description:
** Manage all windows
*/

#include "../../include/defender.h"

void init_windows(game_t *game)
{
    game->state = MENU;
    game->window = sfRenderWindow_create((sfVideoMode) {1920, 1080, 32},
    "My Defender", sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(game->window, 60);
    game->clock.clock = sfClock_create();
    update_background(game, game->textures.menu_background);
}

void update_background(game_t *game, sfTexture *texture)
{
    if (game->background != NULL)
        sfSprite_destroy(game->background);
    game->background = sfSprite_create();
    sfSprite_setTexture(game->background, texture, TRUE);
}

void display_background(game_t *game)
{
    sfRenderWindow_display(game->window);
    sfRenderWindow_drawSprite(game->window, game->background, NULL);
}