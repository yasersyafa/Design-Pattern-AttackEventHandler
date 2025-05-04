#include "../includes/UI.hpp"
#include <iostream>

void UI::onAttack(Enemy* enemy) {
    enemy->takeDamage(10); // misal damage-nya 10
    std::cout << "Enemy HP Updated: " << enemy->getHealth() << std::endl;
}
