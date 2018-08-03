#include "Piece.hpp"

class Board {
  public:
    //Contructors and destructors
    Board();
    ~Board() {}

    //Getters
    Piece* square(int sq);
    bool isOccupied(int sq);

    //Setters
    void addPiece(Piece* piece, int sq);
    void removePiece(int sq);
    void movePiece(int sqFrom, int sqTo);

  private:
    Piece* board[64];
};