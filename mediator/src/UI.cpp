#include "../includes/UI.hpp"
#include <iostream>

void UI::onAttack(Enemy* enemy) {
    std::cout << "Enemy HP Updated: " << enemy->getHealth() << std::endl;
}
