#pragma once
class Board;

#include <iostream>
#include "includes.h"

struct position {
   int x;
   int y;
};

enum charachter {
   empty = ' ',
   pawn = 'p',
   king = 'K',
   queen = 'q',
   rook = 'r',
   bishop = 'b', 
   knight = 'k'
};

enum team {
   dark,
   light
};

class Piece {
public: 
   Piece();
   Piece(enum charachter c);
   team team;
   charachter charachter;
   Board *board;
   bool move(position start, position finish);
};

std::ostream& operator << (std::ostream& o, Piece p);
