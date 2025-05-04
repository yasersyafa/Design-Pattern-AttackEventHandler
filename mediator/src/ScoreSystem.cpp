#include "../includes/ScoreSystem.hpp"

void ScoreSystem::onAttack(Enemy* enemy) {
    if (enemy->isDead()) {
        std::cout << "Score Added if Enemy Dead" << std::endl;
    }
}
