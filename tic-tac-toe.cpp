
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Tic_tac
{

private:
    char baord[3][3];
    char currentPlayer;
    bool gameOver;
    int xWin, oWin, draws, gamesPlayed;
    string firstPlayer ;
    string secondPlayer;

public:
    Tic_tac()
    {
        for (int i = 0; i < 3; i++)
        {

            for (int j = 0; j < 3; j++)
            {
                baord[i][j] = '*';
            }
        }
        currentPlayer = 'X';
        gameOver = false;
        xWin = 0;
        oWin = 0;
        draws = 0;
        gamesPlayed = 0;
    }
    bool get_gameOver()
    {
        return gameOver;
    }

    void display_board()
    {
        string yellow = "\033[33m";
        string reset = "\033[0m";
        string red = "\033[31m";
        string blue = "\033[34m";
        cout << "==============================" << endl;
        cout << yellow << "       TIC TAC TOE" << reset << endl;
        cout << "==============================" << endl
             << endl;

        cout << "      1   2   3" << endl;

        for (int i = 0; i < 3; i++)
        {
            cout << "    +---+---+---+" << endl;

            cout << " " << i + 1 << "  ";

            for (int j = 0; j < 3; j++)
            {
                if (baord[i][j] == 'X')
                {
                    cout << "| " << red << baord[i][j] << reset << " ";
                }
                else if (baord[i][j] == 'O')
                {
                    cout << "| " << blue << baord[i][j] << reset << " ";
                }
                else
                {
                    cout << "| " << baord[i][j] << " ";
                }
            }

            cout << "|" << endl;
        }

        cout << "    +---+---+---+" << endl;
        cout << endl;
        if (currentPlayer == 'X')
        {
            cout << red << " Current Player: " << firstPlayer << reset << endl;
        }
        else
        {
            cout << blue << " Current Player: " << secondPlayer << reset << endl;
        }
    }
    void playerName (){
        cout << "Enter your Name(X): " ;
        cin >> firstPlayer ;
        cout << "Enter your Name(O): ";
        cin >> secondPlayer ;
    }

    void input()
    {
        int row, column;
        cout << "Enter Row: ";
        cin >> row;
        if (row < 1 || row > 3)
        {
            cout << "Row must be between 1 and 3..!" << endl;
            return;
        }

        cout << "Enter Column: ";
        cin >> column;

        if (column < 1 || column > 3)
        {
            cout << "Column must be between 1 and 3..!" << endl;
            return;
        }
        update(row, column);
    }

    void update(int r, int c)
    {
        string green = "\033[32m";
        string reset = "\033[0m";
        r = r - 1;
        c = c - 1;
        if (baord[r][c] == '*')
        {
            baord[r][c] = currentPlayer;
            if (checkWinner())
            {

                display_board();
                checkStats();
                if (currentPlayer == 'X') {
                    cout << green << " Winner is: " << firstPlayer << reset << endl;
                }
                else  {
                    cout << green << " Winner is: " << secondPlayer<< reset << endl;
                }
                cout << endl;
                gameOver = true;
                return;
            }
            else
            {
                if (checkDraw())
                {
                    draws++;
                    gamesPlayed++;
                    display_board();
                    cout << "Match Draw...." << endl;
                    gameOver = true;
                    return;
                }
                else
                {
                    changePlayer();
                }
            }
        }
        else
        {
            cout << "This Already Occupied..!" << endl;
        }
    }

    void changePlayer()
    {
        if (currentPlayer == 'X')
        {
            currentPlayer = 'O';
        }
        else
        {
            currentPlayer = 'X';
        }
    }
    bool checkWinner()
    {
        if (baord[0][0] == baord[0][1] && baord[0][1] == baord[0][2] && baord[0][0] != '*')
        {
            return true;
        }
        else if (baord[1][0] == baord[1][1] && baord[1][1] == baord[1][2] && baord[1][0] != '*')
        {
            return true;
        }
        else if (baord[2][0] == baord[2][1] && baord[2][1] == baord[2][2] && baord[2][0] != '*')
        {

            return true;
        }
        else if (baord[0][0] == baord[1][0] && baord[1][0] == baord[2][0] && baord[0][0] != '*')
        {

            return true;
        }
        else if (baord[0][1] == baord[1][1] && baord[1][1] == baord[2][1] && baord[0][1] != '*')
        {
            return true;
        }
        else if (baord[0][2] == baord[1][2] && baord[1][2] == baord[2][2] && baord[0][2] != '*')
        {
            return true;
        }
        else if (baord[0][0] == baord[1][1] && baord[1][1] == baord[2][2] && baord[0][0] != '*')
        {
            return true;
        }
        else if (baord[0][2] == baord[1][1] && baord[1][1] == baord[2][0] && baord[0][2] != '*')
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool checkDraw()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (baord[i][j] == '*')
                {
                    return false;
                }
            }
        }
        return true;
    }

    void checkStats()
    {

        if (currentPlayer == 'X')
        {
            xWin++;
        }
        else if (currentPlayer == 'O')
        {
            oWin++;
        }
        gamesPlayed++;
    }

    void displayStats()
    {

        string yellow = "\033[33m";
        string reset = "\033[0m";
        cout << "======== GAME STATISTICS ========" << endl;
        cout << "                                 " << endl;
        cout << yellow << "Game Played: " << gamesPlayed << reset << endl;
        cout << yellow << firstPlayer << "  Wins:  " << xWin << reset << endl;
        cout << yellow << secondPlayer << " wins:  " << oWin << reset << endl;
        cout << yellow << "Draw:      " << draws << reset << endl;
    }
    void resetGame()
    {
        for (int i = 0; i < 3; i++)
        {

            for (int j = 0; j < 3; j++)
            {
                baord[i][j] = '*';
            }
        }
        currentPlayer = 'X';
        gameOver = false;
    }
};
int main()
{
    Tic_tac t;
    int choice;
    string yellow = "\033[33m";
    string reset = "\033[0m";

    do
    {
        cout << yellow << "|1. Play Game" << reset << endl;
        cout << yellow << "|2. Game Rules" << reset << endl;
        cout << yellow << "|3. Game Statistics " << reset << endl;
        cout << yellow << "|4. Exit " << reset << endl;
        cout << "Enter Choice :  ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            char again;
            t.playerName();

            do
            {
                
                t.resetGame();

                do
                {
                    system("cls");
                    t.display_board();
                    t.input();

                } while (!t.get_gameOver());

                cout << "Play Again? (Y/N): ";
                cin >> again;

            } while (again == 'Y' || again == 'y');

            break;
        }

        case 2:
        {
            cout << endl;
            cout << "Game Rules" << endl;
            cout << "- Enter row(1-3)" << endl;
            cout << "- Enter column(1-3)" << endl;
            cout << "- X Start first" << endl;
            cout << "- First player to make 3 in a row wins" << endl;
            cout << endl;
            break;
        }

        case 3:
        {
            t.displayStats();
            break;
        }

        case 4:
        {
            cout << "Thanks for Playing.." << endl;
            break;
        }

        default:
        {
            cout << "Invalid choice..!" << endl;
            break;
        }
        }

    } while (choice != 4);
}
