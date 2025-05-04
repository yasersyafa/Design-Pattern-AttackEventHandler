#ifndef ENEMY_H
#define ENEMY_H

#include "ISubject.h"
#include <vector>

class Enemy : public ISubject<Enemy> {
private:
    std::vector<IObserver<Enemy>*> observers;
    int health; // Example health value
public:
    Enemy();
    int getHealth() const { return health; }
    void takeDamage(int damage);
    void attach(IObserver<Enemy>* observer) override;
    void detach(IObserver<Enemy>* observer) override;
    void notify() override;
    void reset();
};

#endif // ENEMY_H
