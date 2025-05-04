#ifndef PLAYER_H
#define PLAYER_H

#include "ISubject.h"
#include <vector>

class Player : public ISubject {
private:
    std::vector<IObserver*> observers;
public:
    void attack();

    void attach(IObserver* observer) override;

    void detach(IObserver* observer) override;

    void notify() override;  
    
};

#endif // PLAYER_H
