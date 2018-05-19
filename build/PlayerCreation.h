// PlayerCreation.h - Select type of Player
// Date: May 18, 2018
// Copyright Prantar <Copyright Owner>

#ifndef BUILD_PLAYERCREATION_H_
#define BUILD_PLAYERCREATION_H_

#include "Human.h"
#include "Player.h"

#include <string>

class PlayerCreation {
 public:
    Player *GetPlayer(std::string);
};

#endif  // BUILD_PLAYERCREATION_H_
