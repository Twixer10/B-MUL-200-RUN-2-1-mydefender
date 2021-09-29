/*
** EPITECH PROJECT, 2021
** my defender
** File description:
** no desc found
*/

#ifndef DEFENDER_H_
#define DEFENDER_H_
#include "./my.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>

typedef enum game_state_h {
    MENU = 0,
    INGAME = 1,
    PAUSE = 2,
    WIN = 3,
    LOOSE = 4,
    CLOSE = 5,
    OPTION = 6,
} game_state_t;

typedef struct clock_manager_h
{
    sfClock *clock;
    sfTime time;
    float seconds;
} my_clock_t;


typedef struct textures_manager_h
{
    sfTexture *menu_background;
} all_textures_t;

typedef struct game_manager_h
{
    sfRenderWindow *window;
    sfEvent event;
    game_state_t state;
    all_textures_t textures;
    my_clock_t clock;
    sfSprite *background;
} game_t;

void load_assets(game_t *game);
void init_windows(game_t *game);
void update_background(game_t *game, sfTexture *texture);
void display_background(game_t *game);

// LOOP INTERFACE

void loop_menu(game_t *game);

#define HELP_MESSAGE "\nDont forget to define HELP_MESSAGE in defender.h"

#endif /* !DEFENDER_H_ */
