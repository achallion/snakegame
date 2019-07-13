#include <iostream>

using namespace std;

#include "variables.cpp"
#include "gameinit.cpp"
#include "gamegraphics.cpp"
#include "gameinput.cpp"
#include "gameprocess.cpp"

int main()
{
    init();  // Initialize all variables
    while ()
    {
        graphics();  // Set the drawing
        input();  // Takes input from user
        process();  // Set The Variables
    }
    return 0;
}