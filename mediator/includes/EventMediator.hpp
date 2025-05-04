#pragma once
#include <vector>
#include "IEventListener.hpp"
#include "Enemy.hpp"

class EventMediator {
    private:
        std::vector<IEventListener*> listeners;
    public:
        void registerListener(IEventListener* listener);
        void notifyAttack(Enemy* enemy);
};