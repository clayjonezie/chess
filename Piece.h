#pragma once
class Board;

#include <iostream>

enum charachter {
   empty = ' ',
   pawn = 'p',
   king = 'K',
   queen = 'q',
   rook = 'r',
   bishop = 'b', 
   knight = 'k'
};

class Piece {
public: 
   Piece();
   Piece(enum charachter c);
   int color;
   charachter charachter;
};

std::ostream& operator << (std::ostream& o, Piece p);
