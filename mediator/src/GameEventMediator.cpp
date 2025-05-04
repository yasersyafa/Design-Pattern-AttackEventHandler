#include "../includes/GameEventMediator.hpp"

void GameEventMediator::registerListener(const std::string& eventName, IEventListener* listener) {
    listeners[eventName].push_back(listener);
}

void GameEventMediator::triggerEvent(const std::string& eventName) {
    if (listeners.find(eventName) != listeners.end()) {
        for (IEventListener* listener : listeners[eventName]) {
            listener->onAttack(enemy);
        }
    }
}

void GameEventMediator::setEnemy(Enemy* e) {
    enemy = e;
}