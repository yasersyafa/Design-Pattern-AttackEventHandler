#pragma once

#include "Player.h"
#include "Enemy.h"
#include "UI.h"
#include "SoundSystem.h"
#include "ScoreSystem.h"

struct GameContext {
    Player player;
    Enemy enemy;
    UI ui;
    SoundSystem soundSystem;
    ScoreSystem scoreSystem;
};
