#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));

    // Computer
    int comp[3];
    while (true)
    {
        // Assigns random values to computer
        for (int i = 0; i < 3; i++)
        {
            comp[i] = (rand() % 3) + 1;
        }

        // FOR CHECKING COMPUTER VALUES
        //  for (int i = 0; i < 3; i++)
        //  {
        //      cout << comp[i] << " " << endl;
        //  }

        int win = 0, loss = 0, round = 1;

        // Whole game coded in this loop
        for (int i = 0; i < 3; i++)
        {
            int user = 0;
            cout << "You : " << win << "  |  Computer : " << loss << endl;
            while (true)
            {

                cout << "------------------------------------------------" << endl;

                cout << " 1.Rock   2.Paper   3.Scissor   | Round " << round << endl;

                cout << "------------------------------------------------" << endl;
                // User input
                cout << "Enter : ";
                cin >> user;
                // If user enters anything like characters etc, this will handle the errors
                if (cin.fail())
                {
                    // clears the buffer
                    cin.clear();
                    // safe upper limit to 1000
                    cin.ignore(1000, '\n');
                    user = 0;
                }
                // checks , to avoid values that aren't required
                if (user == 0 || user > 3)
                {
                    cout << "Invalid Input !!!" << endl;

                    continue;
                }

                // checks if user won
                else if ((user == 1 && comp[i] == 3) ||
                         (user == 2 && comp[i] == 1) ||
                         (user == 3 && comp[i] == 2))
                {
                    cout << "You win" << endl;
                    cout << "You : +1 Point" << endl;
                    win++;

                    break;
                }
                // checks if computer won
                else if ((comp[i] == 1 && user == 3) ||
                         (comp[i] == 2 && user == 1) ||
                         (comp[i] == 3 && user == 2))
                {
                    cout << "You Lost" << endl;
                    cout << "Computer : +1 point" << endl;
                    loss++;

                    break;
                }
                // checks if it's a draw
                else if (user == comp[i])
                    cout << "It's a draw" << endl;

                break;
            }
            // Increments the round value
            round++;
            cout << "------------------------------------------------" << endl;
        }
        // Result
        cout << "Result : ";
        cout << "You : " << win << "  |  Computer : " << loss << endl;
        // Returns if user won
        if (win > loss)
        {
            cout << "You WON" << endl;
        }
        // Returns if computer won
        else if (win < loss)
        {
            cout << "Computer WON" << endl;
        }
        // Returns if it's a draw
        else
            (cout << "It's a DRAW" << endl);
        cout << "------------------------------------------------" << endl;

        // Checks if user wan't to play again
        char choice;
        cout << "Play again? (y/n) : ";
        cin >> choice;

        if (choice == 'n' || choice == 'N')
        {
            break;
        }
        // Clears the terminal/screen in windows only
        system("cls");
    }
    return 0;
}