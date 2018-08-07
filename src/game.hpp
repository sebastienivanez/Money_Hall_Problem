/*! \file
 * Description
 */
#ifndef _GAME_H
#define _GAME_H

/* INCLUDES */

/* MACROS */

/*!
 * \details class
 * \author  Sebastien Ivanez
 * \date    07/08/2018
 */
class Game {
    bool door[3] = {false, false, false};
    
  public:
    // Constructors
    Game();

    // Set/Get methods
    void printDoors();

    // Other methods
    void setupGame();
    bool chooseDoor();
};
#endif
