// PlayerCreation.h - Select type of Player
// Date: May 18, 2018
// Copyright Prantar <Copyright Owner>

#ifndef BUILD_PLAYERCREATION_H_
#define BUILD_PLAYERCREATION_H_

#include "Computer.h"
#include "Human.h"
#include "Player.h"

class PlayerCreation {
 public:
    static Player *GetPlayer(int);
};

#endif  // BUILD_PLAYERCREATION_H_
