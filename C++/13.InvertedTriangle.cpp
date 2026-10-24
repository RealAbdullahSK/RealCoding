#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    cout << "---------------------------------------------------" << endl;
    cout << "Inverted Triangle:" << endl << endl;
    // Rows
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // numbers
        for (int k = 0; k < n - i; k++)
        {
            cout << (i + 1);
        }

        cout << endl;
    }
    cout << "---------------------------------------------------" << endl;

    cout << "Inverted Character Triangle:" << endl << endl;
    // Rows
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Character
        for (int k = 0; k < n - i; k++)
        {
            cout << char('A' + i);
        }

        cout << endl;
    }
    cout << "---------------------------------------------------" << endl;

    return 0;
}