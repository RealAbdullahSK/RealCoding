#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

#define RESET "\033[0m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define RED "\033[31m"
int main()
{
    srand(time(0));

    while (true)
    {
        int n = 4;
        int code[n];
        // loop for assigning the array and checking for duplicate
        for (int i = 0; i < 4; i++)
        {
            while (true)
            {
                // assigns the random number
                code[i] = rand() % 10;
                // predicate
                bool isDuplicate = false;
                // duplicate guard
                for (int j = 0; j < i; j++)
                {
                    if (code[j] == code[i])
                    {
                        isDuplicate = true;
                    }
                }
                if (!isDuplicate)
                {
                    break;
                }
            }
        }
        // Holds the state of each digit
        int digitState[10] = {0};
        // Counts the attempts
        int attempts = 0;
        // Holds the revealed number
        char revealed[4] = {
            '_',
            '_',
            '_',
            '_',
        };
        // Holds the error or any message
        string message = "";
        // Holds the guessed number
        string guess;

        // Displaying and working of whole game
        while (true)
        {
            // Clears screen and builds it afterwards
            system("cls");
            // Shows attempt
            cout << " Attemps : " << attempts << endl;
            cout << "--------------------------------" << endl;
            // Prints numbers from 1-9 and 0
            for (int k = 1; k <= 10; k++)
            {
                // k % 10 converts the 10 into 0
                int d = k % 10;
                if (digitState[d] == 1)
                {
                    // Changes the colour to green
                    cout << GREEN;
                }
                else if (digitState[d] == 2)
                {
                    // Changes the colour to yellow
                    cout << YELLOW;
                }
                else if (digitState[d] == 3)
                {
                    // Changes the colour to red
                    cout << RED;
                }

                // Prints the number then resets to default colour
                cout << d << RESET " ";
            }
            // Check if all digits are found or not
            bool won = true;
            for (int i = 0; i < n; i++)
            {
                if (revealed[i] == '_')
                {
                    won = false;
                }
            }
            // Prints the final screen
            if (won)
            {
                system("cls");
                cout << " Attemps : " << attempts << endl;
                cout << "--------------------------------" << endl;
                for (int k = 1; k <= 10; k++)
                {

                    int d = k % 10;
                    if (digitState[d] == 1)
                    {

                        cout << GREEN;
                    }
                    else if (digitState[d] == 2)
                    {

                        cout << YELLOW;
                    }
                    else if (digitState[d] == 3)
                    {

                        cout << RED;
                    }

                    cout << d << RESET " ";
                }
                cout << endl
                     << "--------------------------------" << endl;

                cout << endl

                     << "Correct guesses : ";
                for (int i = 0; i < n; i++)
                {
                    cout << revealed[i] << " ";
                }
                break;
            }

            cout << endl
                 << "--------------------------------" << endl;

            cout << endl
                 // Displays the coorect guesses
                 << "Correct guesses : ";
            for (int i = 0; i < n; i++)
            {
                cout << revealed[i] << " ";
            }
            cout << endl
                 << endl;

            // Displays the message
            cout << message << endl;
            // Resets the message , so it shows only for one round
            message = "";
            // Inputs the number from User
            cout << "Enter : ";
            cin >> guess;

            // Checks if user added only n digits or not
            bool valid = true;
            if (guess.length() != 4)
            {
                valid = false;
            }
            // Checks if user hasn't added any characters , except than numbers
            for (int i = 0; i < n; i++)
            {
                if (!isdigit(guess[i]))
                {
                    valid = false;
                }
            }
            // Stores error message and reset the screen without increasing attempts
            if (!valid)
            {
                message = "Invalid : Enter exactly 4 digits !";
                continue;
            }
            // Increments the attempt
            attempts++;

            // Changes the stage of each digit displaying on top
            // 1 for Green | 2 for Yellow | 3 for Red
            for (int i = 0; i < n; i++)
            {
                int d = guess[i] - '0';
                if (d == code[i])
                {
                    digitState[d] = 1;
                    revealed[i] = guess[i];
                }
                else
                {
                    bool found = false;
                    for (int j = 0; j < n; j++)
                    {
                        if (d == code[j])
                        {
                            found = true;
                        }
                    }
                    if (found && digitState[d] != 1)
                    {
                        digitState[d] = 2;
                    }

                    if (!found)
                    {
                        digitState[d] = 3;
                    }
                }
            }
        }
        cout << endl
             << endl
             << "--------------------------------" << endl;
        cout << "You Guessed the code!!" << endl
             << "--------------------------------" << endl
             << endl;

        char choice;
        cout << "Play Again? (y/n) : ";
        cin >> choice;
        if (choice == 'n' || choice == 'N')
        {
            break;
        }
    }

    return 0;
}