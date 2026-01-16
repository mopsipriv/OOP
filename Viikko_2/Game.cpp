#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Game.h"

using namespace std;

Game::Game(int maxNum){
    cout<<"GAME CONSTRUCTOR: object initialized with"<<" "<<maxNum<<" as a maximum value"<<endl;
    maxNumber=maxNum;
    srand(time(0));
    randomNumber=rand()%maxNumber+1;
    numOfGuesses=0;

}

Game::~Game(){
    cout<<"GAME DESTRUCTOR:object cleared from stack memory"<<endl;
}

void Game::play(){
    cout<<"Game is working"<<endl;
    while(1){
        cout << "Give your guess between 1-"<<maxNumber<<": "<< endl;
        cin >> playerGuess;
        numOfGuesses++;
        if(playerGuess>randomNumber){
            cout<<"Your guess is bigger. Try again."<<endl;
        }
        else if(playerGuess<randomNumber){
            cout<<"Your guess is smaller.Try again." << endl;
        }
        else if(playerGuess==randomNumber){
            cout<<"Your guess is right = "<<playerGuess<<endl;
            break;
        }
    }
    printGameResult();
}

void Game::printGameResult(){
    cout<<"Number of guesses:"<<numOfGuesses<<endl;
}
