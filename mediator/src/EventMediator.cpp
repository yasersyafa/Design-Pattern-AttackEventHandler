#include "../includes/EventMediator.hpp"

void EventMediator::registerListener(IEventListener* listener) {
    listeners.push_back(listener);
}

void EventMediator::notifyAttack(Enemy* enemy) {
    for (auto* listener : listeners) {
        listener->onAttack(enemy);
    }
}
