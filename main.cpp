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
    init(); // Initialize all variables
    while (true)
    {
        graphics(); // Set the drawing
        input();    // Takes input from user
        process();  // Set The Variables
        break;
    }
    return 0;
}