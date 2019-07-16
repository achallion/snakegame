#include <iostream>
#include <string>
#include <vector>
#include <c++/mylib/conio.hpp>

using namespace std;

string os = "linux";

#include "welcome.cpp"
#include "user.cpp"
#include "variables.cpp"
#include "gameinit.cpp"
#include "gamegraphics.cpp"
#include "gameinput.cpp"
#include "gameprocess.cpp"

int main()
{
    clrscr(os);
    /* 
    welcome();

    do
    {
        // Takes input username and password
        // if wrong ask user for retry or exit
    } while (!userauth());
    */
    while (true) // If 'n' is pressed , new game is initialized
    {
        init(); // Initialize all variables
        while (ch != 'n')
        {
            clrscr(os);
            graphics(); // Set the drawing
            input();    // Takes input from user
            process();  // Set The Variables
        }
    }
    return 0;
}