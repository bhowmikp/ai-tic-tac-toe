// Player.h - Abstract class for Player
// Date: May 19, 2018
// Copyright Prantar <Copyright Owner>

#ifndef BUILD_PLAYER_H_
#define BUILD_PLAYER_H_

#include "Board.h"

class Player {
 private:
    char symbol = 'X';
 public:
    virtual ~Player();
    virtual void PlaceMove(Board*, int, int);
    void SetSymbol(char);
    char GetSymbol();
};

#endif  // BUILD_PLAYER_H_
