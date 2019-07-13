#include <iostream>

using namespace std;

#include "user.cpp"
#include "variables.cpp"
#include "gameinit.cpp"
#include "gamegraphics.cpp"
#include "gameinput.cpp"
#include "gameprocess.cpp"

int main()
{
    do
    {
        // Takes input username and password
        // if wrong ask user for retry or exit
    } while (!userauth());
    
    init();  // Initialize all variables
    while ()
    {
        graphics();  // Set the drawing
        input();  // Takes input from user
        process();  // Set The Variables
    }
    return 0;
}