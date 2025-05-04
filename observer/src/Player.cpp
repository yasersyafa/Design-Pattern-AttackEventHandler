#include "../includes/Player.h"
#include <algorithm>

void Player::attack() {
    notify();
}
void Player::attach(IObserver* observer) {
    // run the base function from header file
    ISubject::attach(observer);
}
void Player::detach(IObserver* observer) {
    ISubject::detach(observer);
}
void Player::notify() {
    // run the base function
    ISubject::notify();
}