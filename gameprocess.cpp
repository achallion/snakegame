#include <ctime>   // For getting time
#include <cstdlib>  // For using rand() and srand()

bool snaketouchfood()  // It tells that snake body is touching food or not
{
    return false;
}

void process()
{
    //akshay if ch is x , program terminates (only 1 case till now, using switch case)
    // note ch should not be displayed on screen
    srand(time(NULL));  // Generates random new number everytime using processor time
    foodrow = rand() % boardrow;  // Get random foodrow position
    foodcol = rand() % boardcol;  // Get random foodcol position
    while(snaketouchfood())  //If snake body touch food , it will generate new food postion
    {
        foodrow = rand() % boardrow; 
        foodcol = rand() % boardcol;
    }
}