#ifndef UI_H
#define UI_H

#include "IObserver.h"
#include <iostream>

class UI : public IObserver {
public:
    void update() override {
        std::cout << "Enemy HP Updated\n";
    }
};

#endif // UI_H
