// Computer.h - Create computer player
// Date: May 19, 2018
// Copyright Prantar <Copyright Owner>

#ifndef BUILD_COMPUTER_H_
#define BUILD_COMPUTER_H_

#include "Board.h"
#include "Player.h"

class Computer : public Player {
 public:
    ~Computer();
    void PlaceMove(Board*, int = 0, int = 0);
};

#endif  // BUILD_COMPUTER_H_
