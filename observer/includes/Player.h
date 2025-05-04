#ifndef PLAYER_H
#define PLAYER_H

#include "ISubject.h"
#include <vector>

class Player : public ISubject<Player> {
private:
    std::vector<IObserver<Player>*> observers;
public:
    void attack();

    void attach(IObserver<Player>* observer) override;

    void detach(IObserver<Player>* observer) override;

    void notify() override;  
    
};

#endif // PLAYER_H
