// P;PlayerCreation.cpp - Select type of Player
// Date: May 18, 2018
// Copyright Prantar <Copyright Owner>

#include "build/PlayerCreation.h"

/*
* Returns the correct player type based on the parameter
*
* @param playerType: ask for type of player.
* 1: human
* 2: computer
*
* @return the proper type of player. If not found returns null
*/
Player *PlayerCreation::GetPlayer(int playerType) {
  if (playerType == 1) {
    return new Human();
  } else {
    return new Computer();
  }
}
