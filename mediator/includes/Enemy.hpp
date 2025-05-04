#pragma once

class Enemy {
public:
    Enemy(int hp);
    void takeDamage(int dmg);
    int getHealth() const;
    bool isDead() const;

private:
    int health;
};
