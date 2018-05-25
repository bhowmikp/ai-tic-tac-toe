// main.h - Plays the game
// Date: May 24, 2018
// Copyright Prantar <Copyright Owner>

#ifndef BUILD_MAIN_H_
#define BUILD_MAIN_H_

#include <iostream>
#include <string>
#include "Board.h"
#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "PlayerCreation.h"

#define ENDL '\n'

const int NUM_PLAYER_TYPES = 2;
const int QUIT_INT = 3;

int getIntInput();
void playGame(Board, Player, Player);

#endif  // BUILD_MAIN_H_
