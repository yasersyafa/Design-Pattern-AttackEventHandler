#include "includes/GameEventMediator.hpp"
#include "includes/Player.hpp"
#include "includes/Enemy.hpp"
#include "includes/UI.hpp"
#include "includes/SoundSystem.hpp"
#include "includes/ScoreSystem.hpp"

int main() {
    GameEventMediator mediator;
    Enemy enemy(30); // enemy dengan 30 HP
    mediator.setEnemy(&enemy);

    UI ui;
    SoundSystem sound;
    ScoreSystem score;

    mediator.registerListener("attack", &ui);
    mediator.registerListener("attack", &sound);
    mediator.registerListener("attack", &score);

    Player player(mediator);

    player.attack(); // Enemy 20 HP
    player.attack(); // Enemy 10 HP
    player.attack(); // Enemy mati → ScoreSystem trigger

    return 0;
}
