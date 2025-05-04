#include "Player.h"
#include <algorithm>

void Player::attack() {
    notify();
}

void Player::attach(IObserver* observer) {
    observers.push_back(observer);
}

void Player::detach(IObserver* observer) {
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

void Player::notify() {
    for (auto* observer : observers) {
        observer->update();
    }
}
