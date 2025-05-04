#include "../includes/Player.hpp"
#include <iostream>

Player::Player(GameEventMediator& m) : mediator(m) {}

void Player::attack() {
    mediator.triggerEvent("attack");
}
