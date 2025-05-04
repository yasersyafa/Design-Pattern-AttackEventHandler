#pragma once

class Enemy {
    private:
        int health;
    public: 
        Enemy(int hp);
        void takeDamage(int amount);
        int getHealth() const;
        bool isDead() const;
};