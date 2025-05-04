#pragma once
#include <string>
#include <unordered_map>
#include <vector>
#include "IEventListener.hpp"
#include "Enemy.hpp"

class GameEventMediator {
public:
    void registerListener(const std::string& eventName, IEventListener* listener);
    void triggerEvent(const std::string& eventName);

    void setEnemy(Enemy* enemy); // supaya listener bisa akses enemy
private:
    std::unordered_map<std::string, std::vector<IEventListener*>> listeners;
    Enemy* enemy = nullptr;
};
