// Board.h - Create tic tac toe board
// Date: April 28, 2018
// Copyright Prantar <Copyright Owner>

#ifndef BUILD_BOARD_H_
#define BUILD_BOARD_H_

#include <iostream>
#include <string>

#define ENDL '\n'
#define REP(i, a, b) for (int i = a; i < b; i++)

char const EMPTY_SYMBOL = '-';

class Board {
 private:
    static bool instance_flag;
    static Board *single;
    std::string board;
    Board();
    bool CheckWinRow();
    bool CheckWinColumn();
    bool CheckWinDiagonal();
 public:
    ~Board();
    static Board* GetBoardInstance();
    void CreateBoard();
    void ClearBoard();
    void PrintBoard();
    std::string GetBoard();
    void SetSymbol(int, int, char);
    char GetSymbol(int, int);
    bool IsBoardFull();
    bool IsPositionTaken(int, int);
    bool CheckWin();
};

#endif  // BUILD_BOARD_H_
