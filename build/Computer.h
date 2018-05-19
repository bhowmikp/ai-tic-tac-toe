// Computer.h - Create computer player
// Date: May 19, 2018
// Copyright Prantar <Copyright Owner>

#ifndef BUILD_COMPUTER_H_
#define BUILD_COMPUTER_H_

#include "Player.h"

class Computer : public Player {
 public:
    void PlaceMove(int, int);
};

#endif  // BUILD_COMPUTER_H_
