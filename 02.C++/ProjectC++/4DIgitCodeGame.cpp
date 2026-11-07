#include <iostream>
#include <string>
#include <cstdlib> //adds rand and srand
#include <ctime>   //adds time
#include <cctype>  //adds isdigit
using namespace std;
int main()
{

    // Array for storing the 4 digit number
    int num[4];
    srand(time(0));

    // loop for assigning the array and checking for duplicate
    for (int i = 0; i < 4; i++)
    {
        while (true)
        {
            // assigns the random number
            num[i] = rand() % 10;
            // predicate
            bool isDuplicate = false;
            // duplicate guard
            for (int j = 0; j < i; j++)
            {
                if (num[j] == num[i])
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

    // FOR ANSWERS | OR CHECKING IF ITS WORKING OR NOT
    //  for (int i = 0; i < 4; i++)
    //  {
    //      cout << num[i];
    //  }
    //  cout << endl;
    int attempts = 0;
    while (true)
    {
        string CheckNum;
        // loop for user input and checking if its correct format or not
        while (true)
        {
            cout << "------------------------------------------------" << endl;

            cout << "guess the 4 digit number" << endl;
            cout << "-----------------" << endl;
            cout << "Enter : ";
            cin >> CheckNum;
            cout << "-----------------" << endl;
            bool Valid = true;
            if (CheckNum.length() != 4)
            {
                cout << "Enter Only 4 Digits!!!" << endl;
                Valid = false;
            }
            for (int i = 0; i < CheckNum.length(); i++)
            {
                // isdigit returns 1 for number and 0 for anything else
                //  so inversing the result can give us only numbers
                if (!isdigit(CheckNum[i]))
                {
                    cout << "Position " << i + 1 << " is not a number" << endl;
                    Valid = false;
                }
            }

            if (Valid)
            {
                break;
            }
        }

        cout << "Correct Guesses :";
        int correct = 0;
        for (int i = 0; i < 4; i++)
        {
            //* -'0' * is added to convert the string into int for comparision
            if (CheckNum[i] - '0' == num[i])
            {
                cout << " " << CheckNum[i];
                correct++;
            }
            else
            {
                cout << " _";
            }
        }
        cout << endl;

        cout << "In the Code but Incorrect postion : ";
        for (int i = 0; i < 4; i++)
        {
            if (CheckNum[i] - '0' != num[i])
            {
                bool found = false;
                for (int j = 0; j < 4; j++)
                {
                    if (CheckNum[i] - '0' == num[j])
                    {
                        found = true;
                    }
                }
                if (found)
                {
                    cout << CheckNum[i] << " ";
                }
            }
        }
        cout << endl;

        attempts++;
        if (correct == 4)
        {
            cout << endl;
            cout << "YOU GUESSED THE NUMBER" << endl;
            cout << "Attempts taken : " << attempts << endl;
            break;
        }
    }
    cout << "------------------------------------------------" << endl;

    return 0;
}