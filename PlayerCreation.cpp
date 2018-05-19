// P;PlayerCreation.cpp - Select type of Player
// Date: May 18, 2018
// Copyright Prantar <Copyright Owner>

#include <algorithm>
#include <iostream>
#include <string>
#include "build/Human.h"
#include "build/Player.h"
#include "build/PlayerCreation.h"

#define ENDL "\n"

/*
* Returns the correct player type based on the parameter
*
* @param playerType: ask for type of player
*
* @return the proper type of player. If not found returns null
*/
Player *PlayerCreation::GetPlayer(std::string playerType) {
  std::transform(playerType.begin(), playerType.end(), playerType.begin(),
                  ::tolower);

  if (playerType == "human") {
    return new Human();
  } else if (playerType == "computer") {
    std::cout << "Create human" << ENDL;
    return new Human();
  } else {
    return new Human();
  }
}
