/*! \file
 * Description
 */
 
/* INCLUDES */
#include <time.h>
#include "game.hpp"

/* MACROS */

/*! \namespace std */
using namespace std;

/*!
 * \details Constructor
 * \author  Sebastien Ivanez
 * \date    07/08/2018
 */
Game::Game()
{
    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        this->door[i] = false;
    }
}

void Game::printDoors()
{
    for (int i = 0; i < 3; i++) {
        cout << "door[" << i << "] = " << this->door[i] << endl;
    }
}

void Game::setupGame()
{
    int index = rand() % 3;
    
    for (int i = 0; i < 3; i++) {
        if (index == i)
            this->door[i] = true;
        else
            this->door[i] = false;
    }
}

bool Game::chooseDoor()
{
    //srand(time(NULL));
    int index = rand() % 3;

    return this->door[index];
}
