#pragma once

enum GameEvent
{
    EVENT_NULL=0
};

enum GameState
{
    STATE_UNINITIALIZED=0
};

class CGame
{
public:
    CGame() { this->state = STATE_UNINITIALIZED; };
    ~CGame();
private:
    GameState state;
};
