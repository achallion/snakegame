void graphics()
{
    for(int i = 0;i < boardrow ;i++)  // i is the current row
    {
        for(int j = 0;j < boardcol ;j++)  // j is the current column
        {
            if(i == 0 or j == 0 or i == boardrow - 1 or j == boardcol - 1)  // Generate a board boundary
                cout<<'*';
            else
                cout<<' ';
        }
        cout<< '\n';  // After every row completed , we go to a new nextrow
    }
}