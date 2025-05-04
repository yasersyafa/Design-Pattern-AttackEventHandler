#pragma once
class Enemy;

class IEventListener {
    public:
        virtual void onAttack(Enemy* enemy) = 0;
        virtual ~IEventListener() = default;
};