void init() // Initializes the variables
{
    boardcol = 30;
    boardrow = 15;
    foodrow = boardrow / 2;
    foodcol = boardcol / 2;
    snakerow.push_back(boardrow / 4);
    snakecol.push_back(boardcol / 4);
}