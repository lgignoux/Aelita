#define NO_TYPE 0
#define PAWN 1
#define KNIGHT 2
#define BISHOP 3
#define ROOK 4
#define QUEEN 5
#define KING 6

#define WHITE 1
#define BLACK -1
#define NO_COLOR 0

class Piece {
  public:
    //Contructors and destructors
    Piece(int pieceType, int color, int position);
    ~Piece() {}

    //Getters
    int getType() const { return this->pieceType; }
    int getColor() const { return this->color; }
    bool isAlive() const { return this->alive; }
    int getPosition() const { return this->position; }

    //Setters
    void promote(int newType);
    void demote() { this->pieceType = PAWN; }
    void kill() { this->alive = false; }
    void resurrect() { this->alive = true; }
    void moveTo(int newPosition);

  private:
    int pieceType;
    int color;
    bool alive;
    int position;
};
