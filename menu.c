/*
** EPITECH PROJECT, 2022
** menu.c
** File description:
** menu.c
*/

#include "my.h"

void principale_loop_menu(my_rpg *rpg, my_box *box, sfRenderWindow* window)
{
    int currentSprite = 0, numSprites = 4;
    float elapsedTime = 0.f, timePerFrame = 1.0f;
    sfClock* clock = sfClock_create();
    while (sfRenderWindow_isOpen(window)) {
        elapsedTime += sfTime_asSeconds(sfClock_getElapsedTime(clock));
        if (elapsedTime > timePerFrame) {
            currentSprite = (currentSprite + 1) % numSprites;
            elapsedTime = 0.f;
        }
        sfRenderWindow_drawSprite(window, rpg->sprites[currentSprite], NULL);
        sfSleep(sfMilliseconds(130));
        sfRenderWindow_drawSprite(window, rpg->button_play, NULL);
        sfRenderWindow_drawSprite(window, rpg->button_setting, NULL);
        sfRenderWindow_drawSprite(window, rpg->button_exit, NULL);
        sfRenderWindow_display(window);
        menu_mouse_event(rpg, box, window);
    }
}

void menu(my_rpg *rpg, my_box *box)
{
    sfRenderWindow* window;
    sfVideoMode video_mode = {1920, 1080};

    window = sfRenderWindow_create(video_mode, "my_rpg",
    sfResize | sfClose, NULL);

    loading_menu_sprite(rpg);

    principale_loop_menu(rpg, box, window);
}

void sd_menu(my_rpg *rpg, my_box *box, sfRenderWindow* window)
{
    loading_menu_sprite(rpg);

    principale_loop_menu(rpg, box, window);
}
