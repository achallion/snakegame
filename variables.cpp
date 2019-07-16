int boardrow, boardcol;         // board size in number of rows and column
int foodrow, foodcol;           // food position in row and column number
vector<int> snakerow, snakecol; // snake body position with head at 0th index of both vectors
int snakeendrow, snakeendcol;   // snake end part coordinates for extension purpose
char ch, previous;              // Takes input
struct user                     // For taking user logins
{
    string username;
    string password;
};