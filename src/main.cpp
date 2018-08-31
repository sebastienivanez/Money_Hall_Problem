/*! \file
 * Description
 */
 
/* INCLUDES */
#include <iostream> // To call cout/cin
#include "game.hpp"

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
