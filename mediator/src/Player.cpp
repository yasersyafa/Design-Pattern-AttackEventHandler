#include "../includes/Player.hpp"
#include <iostream>

Player::Player(EventMediator& mediator, Enemy& enemy)
    : mediator(mediator), enemy(enemy) {}

void Player::attack() {
    std::cout << "Player attacks!\n";
    enemy.takeDamage(10);
    mediator.notifyAttack(&enemy);
}
