#pragma once
class Enemy;

class IEventListener {
    public:
        virtual void attack(Enemy* enemy) = 0;
        virtual ~IEventListener() = 0;
};