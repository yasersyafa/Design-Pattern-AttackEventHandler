#pragma once
#include "IEventListener.hpp"
#include "Enemy.hpp"

class ScoreSystem : public IEventListener {
public:
    void onAttack(Enemy* enemy) override;
};
