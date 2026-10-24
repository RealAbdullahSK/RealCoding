#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    cout << "----------------------------------------------------" << endl;

    // Rows
    for (int i = 0; i < n; i++)
    {
        // Spaces - n-i-1
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Numbers - 1 -- 1 to i+1
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }

        // Numbers - 2 -- i to 1
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }
    cout << "----------------------------------------------------" << endl;

    return 0;
}