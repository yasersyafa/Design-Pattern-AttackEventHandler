#include "includes/EventMediator.hpp"
#include "includes/Player.hpp"
#include "includes/Enemy.hpp"
#include "includes/UI.hpp"
#include "includes/SoundSystem.hpp"
#include "includes/ScoreSystem.hpp"

int main() {
    Enemy enemy(30);
    EventMediator mediator;

    UI ui;
    SoundSystem sound;
    ScoreSystem score;

    mediator.registerListener(&ui);
    mediator.registerListener(&sound);
    mediator.registerListener(&score);

    Player player(mediator, enemy);

    player.attack();
    player.attack();
    player.attack();

    return 0;
}
