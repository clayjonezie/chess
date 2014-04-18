#include <iostream>
#include "includes.h"

Piece::Piece() {
}
Piece::Piece(enum charachter c) {
   this->charachter = c;
}

std::ostream& operator << (std::ostream& o, Piece p) {
   o << (char)p.charachter;
   return o;
}
