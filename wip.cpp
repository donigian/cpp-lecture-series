#include <iostream>

using namespace std;

class Player {
private:
    string name;
    char side;
public:
    Player(string player_name, char player_side){
        name = player_name;
        side = player_side;
    }

    void move(char from_col, char to_col, int from_row, int to_row){

    }

};

class Piece {
private:
    string type;
    char col;
    int row;
    char color;
public:
    Piece(string t, char c, int r, char co){
        type = t;
        col = c;
        row = r;
        color = co;
    }

};

int main() {
    cout << "Hello, let's play some Chess!" << endl;
    Player player1("Bob", 'W');
    Player player2("Simantha", 'B');
    Piece Whiteknight1("Knight",'B', 1, 'W');
    Piece Whiteknight2("Knight",'G', 1, 'W');
//    player1.move();
    return 0;
}
