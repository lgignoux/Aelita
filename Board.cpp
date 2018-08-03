#include <assert.h>
#include "Board.hpp"

Board::Board() {
  for (int i = 0; i < 64; i++) {
    this->board[i] = NULL;
  }
}

Piece* Board::square(int sq) {
  assert(sq >= 0 && sq <= 63);
  return this->board[sq];
}

bool Board::isOccupied(int sq) {
  assert(sq >= 0 && sq <= 63);
  return this->board[sq] != NULL;
}

void Board::addPiece(Piece* piece, int sq) {
  assert(sq >= 0 && sq <= 63);
  this->board[sq] = piece;
}

void Board::removePiece(int sq) {
  assert(sq >= 0 && sq <= 63);
  this->board[sq] = NULL;
}

void Board::movePiece(int sqFrom, int sqTo) {
  assert(sqFrom >= 0 && sqFrom <= 63);
  assert(sqTo >= 0 && sqTo <= 63);
  assert(sqFrom != sqTo);
  this->board[sqTo] = this->board[sqFrom];
  this->board[sqFrom] = NULL;
}
