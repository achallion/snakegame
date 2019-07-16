#include <ctime>   // For getting time
#include <cstdlib> // For using rand() and srand()

bool snaketouchfood() // It tells that snake body is touching food or not
{
    return false;
}

bool boardtouchfood() // It tells that food touch the board or not
{
    return false;
}

void foodpos()
{
    srand(time(NULL));                           // Generates random new number everytime using processor time
    foodrow = rand() % (boardrow - 1);           // Get random foodrow position
    foodcol = rand() % (boardcol - 1);           // Get random foodcol position
    while (snaketouchfood() or boardtouchfood()) //If snake body touch food , it will generate new food postion
    {
        foodrow = rand() % (boardrow - 1);
        foodcol = rand() % (boardcol - 1);
    }
}

void snakebodyfollowhead() // This function just makes snake body to follow its head
{
    int n = snakerow.size();
    snakeendcol = snakecol[n - 1];                 // We get the end position of snake body (column here)
    snakeendrow = snakerow[n - 1];                 // row end position from here
    for (int i = snakerow.size() - 1; i >= 1; i--) // Shift other indices 1 time towards head
    {
        snakerow[i] = snakerow[i - 1];
        snakecol[i] = snakecol[i - 1];
    }
}

void goup() // It makes snake go up
{
    snakebodyfollowhead();
    snakerow[0]--;
}

void goleft() // It makes snake go left
{
    snakebodyfollowhead();
    snakecol[0]--;
}

void godown() // It makes snake go down
{
    snakebodyfollowhead();
    snakerow[0]++;
}

void goright() // It makes snake go right
{
    snakebodyfollowhead();
    snakecol[0]++;
}

bool snakeeatfood() // This tell that if snake has eaten food or not
{
    if (snakerow[0] == foodrow and snakecol[0] == foodcol)
        return true;
    return false;
}

void snakelengthincrease() // It makes snake length to increase by 1 unit
{
    snakerow.push_back(snakeendrow);
    snakecol.push_back(snakeendcol);
}

void process()
{
here:
    switch (ch) // switches ch for up ,down ,left or right
    {
    case 'w':
    case 'W':
        goup();
        break;
    case 'a':
    case 'A':
        goleft();
        break;
    case 's':
    case 'S':
        godown();
        break;
    case 'd':
    case 'D':
        goright();
        break;
    case 'n':
    case 'x':
        break;
    default:
        ch = previous; // We use the previous pressed key if any other key is pressed
        goto here;
    }
    previous = ch;
    if (snakeeatfood()) // If snake eats food
    {
        snakelengthincrease(); // Snake length increase
        foodpos();             // New food position
    }
}