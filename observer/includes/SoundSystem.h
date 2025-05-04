#ifndef SOUNDSYSTEM_H
#define SOUNDSYSTEM_H

#include "IObserver.h"
#include <iostream>

class SoundSystem : public IObserver {
public:
    void update() override {
        std::cout << "Play Attack Sound\n";
    }
};

#endif // SOUNDSYSTEM_H
