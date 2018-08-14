/*! \file
 * Description
 */
 
/* INCLUDES */
//#include <cstdlib> // To call atoi()
//#include <fcntl.h> // To call open()
//#include <iomanip> // To call setw()
#include <iostream> // To call cout/cin
//#include <sstream> // To call stringstream
//#include <stdint.h> // To use uint8_t
//#include <stdlib.h> // To call malloc()/sleep()
//#include <unistd.h> // To call read()
#include "game.cpp"

/* MACROS */

/*! \namespace std */
using namespace std;

/*!
 * \details Entry function to project.
 * \author  Sebastien Ivanez
 * \date    07/08/2018
 */
int main()
{
    int nb_of_turns = 100;
    int wo_switch_result = 0;
    int w_switch_result = 0;
    Game wo_switch;
    Game w_switch;
    bool wo_switch_win = false;
    bool w_switch_win = false;

    do {
    	wo_switch.setupGame();
    	w_switch.setupGame();
        wo_switch_win = wo_switch.chooseDoor();
        w_switch_win = w_switch.chooseDoor();
        wo_switch_result += wo_switch_win;
        w_switch_result += !(w_switch_win);
        nb_of_turns--;
    } while(nb_of_turns);

    cout << "result without switch = " << wo_switch_result << " %" << endl;
    cout << "result with switch = " << w_switch_result << " %" << endl;
        
	return 0;
}
