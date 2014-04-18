#include <iostream>
#include "includes.h"

Board::Board() {
   int i;
   for (i = 0; i < BOARD_DIM; i++) {
      for (int j = 0; j < BOARD_DIM; j++) {
         this->board[i][j] = Piece(empty);
      }
   }
   this->board[0][0].charachter = rook;
   this->board[1][0].charachter = knight;
   this->board[2][0].charachter = bishop;
   this->board[3][0].charachter = queen;
   this->board[4][0].charachter = king;
   this->board[5][0].charachter = bishop;
   this->board[6][0].charachter = knight;
   this->board[7][0].charachter = rook;

   for (i = 0; i < BOARD_DIM; i++) {
      this->board[i][1].charachter = pawn;
   }

   for (i = 0; i < BOARD_DIM; i++) {
      this->board[i][6].charachter = pawn;
   }

   this->board[0][7].charachter = rook;
   this->board[1][7].charachter = knight;
   this->board[2][7].charachter = bishop;
   this->board[3][7].charachter = queen;
   this->board[4][7].charachter = king;
   this->board[5][7].charachter = bishop;
   this->board[6][7].charachter = knight;
   this->board[7][7].charachter = rook;

   for (i = 0; i < BOARD_DIM; i++) {
      this->board[i][0].team = dark;
      this->board[i][1].team = dark;
      this->board[i][6].team = light;
      this->board[i][7].team = light;
   }
}

Piece Board::getPiece(int x, int y) {
   return this->board[x][y];
}

void Board::print() {
   Piece p;
   std::cout << "________________________________" << std::endl;
   for (int i = 0; i < BOARD_DIM; i++) { // iter down
      std::cout << "|";
      
      for (int j = 0; j < BOARD_DIM; j++) { // iter across
         p = getPiece(j, i);
         std::cout << "_";
         if (p.team == dark)
            std::cout << "\033[31m";
         else
            std::cout << "\033[36m";

         std::cout << getPiece(j, i);
         std::cout << "\033[0m";
         std::cout << "_|";
      }
      std::cout << std::endl;
   }
}

bool Board::move(position from, position to) {
   return true;   
}

/*
________________________________
|_r_|_k_|_b_|_k_|_q_|_b_|_k_|_r_|
|_p_|_p_|_p_|_p_|_p_|_p_|_p_|_p_|
|___|___|___|___|___|___|___|___|
|___|___|___|___|___|___|___|___|
|___|___|___|___|___|___|___|___|
|___|___|___|___|___|___|___|___|
|_p_|_p_|_p_|_p_|_p_|_p_|_p_|_p_|
|_r_|_k_|_b_|_q_|_k_|_b_|_k_|_r_|

 */
