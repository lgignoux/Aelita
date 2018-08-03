#include <assert.h>
#include "Piece.hpp"

Piece::Piece(int pieceType, int color, int position) {
  assert(pieceType >= PAWN && pieceType <= KING);
  assert(color == WHITE || color == BLACK);
  assert(position >= 0 && position <= 63);
  this->pieceType = pieceType;
  this->color = color;
  this->position = position;
  this->alive = true;
}

void Piece::promote(int newType) {
  assert(newType >= PAWN && newType <= KING);
  this->pieceType = newType;
}

void Piece::moveTo(int newPosition) {
  assert(newPosition >= 0 && newPosition <= 63);
  this->position = newPosition;
}
