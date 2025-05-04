#ifndef PLAYER_H
#define PLAYER_H

#include "ISubject.h"
#include <vector>

class Player : public ISubject {
private:
    std::vector<IObserver*> observers;
public:
    void attack() {
        // Trigger attack event
        notify();
    }

    void attach(IObserver* observer) override {
        observers.push_back(observer);
    }

    void detach(IObserver* observer) override {
        observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
    }

    void notify() override {
        for (auto* observer : observers) {
            observer->update();
        }
    }
};

#endif // PLAYER_H
