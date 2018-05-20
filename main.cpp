// main.cpp - Executes the game
// Date: May 18, 2018
// Copyright Prantar <Copyright Owner>

#include <iostream>
#include <string>
#include "build/Board.h"
#include "build/Computer.h"
#include "build/Human.h"
#include "build/Player.h"
#include "build/PlayerCreation.h"

#define ENDL "\n"

const int NUM_PLAYER_TYPES = 2;

int main() {
  int playerType;

  // create board
  Board *board = Board::GetBoardInstance();
  board->CreateBoard();

  // create human first player
  Player *firstPlayer = new Human();
  firstPlayer->SetSymbol('X');

  std::cout << "Select player type" << ENDL;
  std::cout << "1: Human Player" << ENDL;
  std::cout << "2: Computer Player" << ENDL;

  std::cin >> playerType;

  while (playerType < 1 || playerType > NUM_PLAYER_TYPES) {
    std::cout << "Not valid input" << ENDL;
    std::cin >> playerType;
  }

  // create second player
  PlayerCreation *createPlayer = new PlayerCreation();
  Player *secondPlayer = createPlayer->GetPlayer(playerType);
  delete createPlayer;
  secondPlayer->SetSymbol('O');


  delete board;
  delete firstPlayer;
  delete secondPlayer;

  return 0;
}
