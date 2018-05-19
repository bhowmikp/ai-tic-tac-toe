// Human.h - Create human player
// Date: May 19, 2018
// Copyright Prantar <Copyright Owner>

#ifndef BUILD_HUMAN_H_
#define BUILD_HUMAN_H_

#include "Player.h"

class Human : public Player {
 public:
    virtual void PlaceMove(int, int);
};

#endif  // BUILD_HUMAN_H_
