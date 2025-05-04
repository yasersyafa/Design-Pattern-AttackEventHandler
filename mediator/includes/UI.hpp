#pragma once
#include "IEventListener.hpp"
#include "Enemy.hpp"

class UI : public IEventListener {
public:
    void onAttack(Enemy* enemy) override;
};
