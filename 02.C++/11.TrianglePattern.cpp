#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    // Prints triangle pattern of stars
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Prints triangle pattern of numbers
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }

    // Prints triangle pattern of ABC
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }

    return 0;
}