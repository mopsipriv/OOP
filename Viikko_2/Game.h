#ifndef GAME_H
#define GAME_H
#include <cstdlib>
class  Game{
private:
    int maxNumber=0;
    int playerGuess;
    int randomNumber;
    int numOfGuesses=0;
    void printGameResult();

public:
    Game(int);
    void play();
    ~Game();
};


#endif // GAME_H
