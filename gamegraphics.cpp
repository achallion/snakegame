int issnake(int row, int col) // tells that if there is snake at current position
{
    if (row == snakerow[0] and col == snakecol[0]) // at 0,0 there is snake head, so return 0
        return 0;
    return -1; // -1 means not snake body
}

void graphics()
{
    for (int i = 0; i < boardrow; i++) // i is the current row
    {
        for (int j = 0; j < boardcol; j++) // j is the current column
        {
            int getsnake = issnake(i, j);
            if (i == 0 or j == 0 or i == (boardrow - 1) or j == (boardcol - 1)) // Generate a board boundary
                cout << '*';
            else if (i == foodrow and j == foodcol) // draws food at current position
                cout << '+';
            else if (getsnake == 0) // draws snake head
                cout << 'O';
            else if (getsnake == 1) // draws snake body
                cout << 'o';
            else
                cout << ' ';
        }
        cout << '\n'; // After every row completed , we go to a new nextrow
    }
}