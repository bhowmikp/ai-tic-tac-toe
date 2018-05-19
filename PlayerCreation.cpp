// P;PlayerCreation.cpp - Select type of Player
// Date: May 18, 2018
// Copyright Prantar <Copyright Owner>

#include <algorithm>
#include <iostream>
#include <string>
#include "build/PlayerCreation.h"

#define ENDL "\n"

/*
* Returns the correct player type based on the parameter
*
* @param playerType: ask for type of player
*
* @return the proper type of player. If not found returns null
*/
void PlayerCreation::GetPlayer(std::string playerType) {
  std::transform(playerType.begin(), playerType.end(), playerType.begin(),
                  ::tolower);

  if (playerType == "human") {
    std::cout << "This is a human player" << ENDL;
  } else if (playerType == "computer") {
    std::cout << "This is a computer player" << ENDL;
  } else {
    std::cout << "No player" << ENDL;
  }
}
