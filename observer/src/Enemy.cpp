#include "../includes/Enemy.h"
#include <algorithm>

Enemy::Enemy() {
    health = 100; // Initialize health
}

void Enemy::takeDamage(int damage) {
    health -= damage;
    if (health <= 0) {
        health = 0; // Ensure health doesn't go negative
    }
    notify();
}

void Enemy::attach(IObserver<Enemy>* observer) {
    observers.push_back(observer);
}

void Enemy::detach(IObserver<Enemy>* observer) {
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

void Enemy::notify() {
    for (auto* observer : observers) {
        observer->update(this);
    }
}

void Enemy::reset() {
    health = 100; // Reset health to initial value
}
