#include "../includes/GameContext.h"

GameContext setupGame() {
    GameContext context;

    context.player.attach(&context.ui);
    context.player.attach(&context.soundSystem);

    context.enemy.attach(&context.soundSystem);
    context.enemy.attach(&context.scoreSystem);
    context.enemy.attach(&context.ui);

    return context;
}