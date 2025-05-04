#include "../includes/ScoreSystem.hpp"
#include <iostream>

void ScoreSystem::onAttack(Enemy* enemy) {
    if (enemy->isDead()) {
        std::cout << "Score Added if Enemy Dead" << std::endl;
    }
}
