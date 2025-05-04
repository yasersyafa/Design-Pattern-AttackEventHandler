#include "../includes/Enemy.hpp"

Enemy::Enemy(int hp) : health(hp) {}

void Enemy::takeDamage(int dmg) {
    health -= dmg;
    if (health < 0) health = 0;
}

int Enemy::getHealth() const {
    return health;
}

bool Enemy::isDead() const {
    return health <= 0;
}
