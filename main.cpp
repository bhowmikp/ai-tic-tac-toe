// main.cpp - Executes the game
// Date: May 18, 2018
// Copyright Prantar <Copyright Owner>

#include "build/main.h"

/*
* Checks if the given input is an integer. If not say input is not valid
* and asks again
*
* @return integer with proper input validation done
*/
int getIntInput() {
  int returnValue;

  while (!(std::cin >> returnValue)) {
    std::cout << "Enter valid input" << ENDL;
    std::cin.clear();
    std::cin.ignore();
  }

  return returnValue;
}

/*
* Asks the user for row and column info
*
* @return pair of info. First value row, second column
*/
std::pair<int, int> getRowAndColumnInfo() {
  return std::pair(0, 0);
}

/*
* Plays the tic tac toe game
*
* @param board is the board to be played on
* @param firstPlayer is the first player
* @param secondPlayer is the second player
*/
void playGame(Board *board, Player *firstPlayer, Player *secondPlayer) {
  int counter = 1;
  int row, column;

  while (!board->CheckWin() && !board->IsBoardFull()) {
    if (counter % 2 == 1) {
      std::cout << "Player 1 enter row number: ";
      row = getIntInput();
      std::cout << "Player 1 enter column number: ";
      column = getIntInput();
      firstPlayer->PlaceMove(board, row, column);
    } else {
      std::cout << "Player 2 enter row number: ";
      row = getIntInput();
      std::cout << "Player 2 enter column number: ";
      column = getIntInput();
      secondPlayer->PlaceMove(board, row, column);
    }
    board->PrintBoard();
    counter++;
  }
}

int main() {
  int playerType;

  // create board
  Board *board = Board::GetBoardInstance();
  board->CreateBoard();

  // create human first player
  Player *firstPlayer = new Human();
  firstPlayer->SetSymbol('X');

  while (1) {
    std::cout << "1: Human Player" << ENDL;
    std::cout << "2: Computer Player" << ENDL;
    std::cout << QUIT_INT << ": QUIT" << ENDL;
    std::cout << "Select player type: ";
    playerType = getIntInput();

    while ((playerType < 1 || playerType > NUM_PLAYER_TYPES)
            && playerType != QUIT_INT) {
      std::cout << "Enter valid input" << ENDL;
      playerType = getIntInput();
    }

    if (playerType == QUIT_INT)
      return 0;

    // create second player
    PlayerCreation *createPlayer = new PlayerCreation();
    Player *secondPlayer = createPlayer->GetPlayer(playerType);
    delete createPlayer;
    secondPlayer->SetSymbol('O');

    board->ClearBoard();
    playGame(board, firstPlayer, secondPlayer);

    delete secondPlayer;
  }

  delete board;
  delete firstPlayer;

  return 0;
}
