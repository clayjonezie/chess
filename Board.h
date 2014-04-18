#pragma once

#include "Piece.h"

#define BOARD_DIM 8

class Board {
public:
   Board();
   Piece getPiece(int x, int y);
   Piece board[BOARD_DIM][BOARD_DIM];
   void print();
   bool move(position x, position y);
};
