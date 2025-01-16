#include "game.h"



Game::Game(int num)
{
    cout << "Constructor kutsuttu" << endl;
    maxNumber = num;
    randomNumber = 0;
};

Game::~Game()
{
    cout << "Destructor kutsuttu" << endl;
}

void Game::play()
{
    srand((unsigned) time(0));

    randomNumber = (rand() % 20) + 1;

    while (playerGuess != randomNumber){

        if (playerGuess == maxNumber){
            cout << "Peli paattyi" << endl;
            break;
        }



        cout << "Arvaa luku." << endl;
        cin >> playerGuess;
        numOfGuesses++;


        if(playerGuess > randomNumber){
            cout << "Arvaus on liian suuri." << endl;
        }

        if(playerGuess < randomNumber){
            cout << "Arvaus on liian pieni." << endl;
        }

        if(playerGuess == randomNumber){
            printGameResult();
        }
    }
}

void Game::printGameResult()
{
        cout << "Arvausten maara:" << numOfGuesses << endl;
        cout << "Arvasit oikein." << endl;
}


