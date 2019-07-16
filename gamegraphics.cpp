int issnake(int row, int col) // tells that if there is snake at current position
{
    int n = snakerow.size();
    if (row == snakerow[0] and col == snakecol[0]) // at [0],[0] there is snake head, so return 0
        return 0;
    for (int i = 1; i < n; i++) // At other index of array , there is snake body
    {
        if (row == snakerow[i] and col == snakecol[i])
            return 1;
    }
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
            else if (getsnake == 0) // draws snake head
                cout << '@';
            else if (getsnake == 1) // draws snake body
                cout << 'o';
            else if (i == foodrow and j == foodcol) // draws food at current position
                cout << '+';
            else
                cout << ' ';
        }
        cout << '\n'; // After every row completed , we go to a new nextrow
    }

    // temporary
    // remove after testing
    //*******
    cout << foodrow << " " << foodcol << "\n"
         << snakerow[0] << " " << snakecol[0];
    //#######
}