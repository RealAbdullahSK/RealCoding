#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    // Loop for Top part -------------------------------------------------
    // Rows
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Asterisk
        cout << "*";

        // Condition --- to avoid running it for i=0
        if (i != 0)
        {
            // Spaces
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            // Asterisk
            cout << "*";
        }
        // Next line
        cout << endl;
    }
    // Loop for Top part Ends here ---------------------------------------

    // Loop for Bottom part ----------------------------------------------
    // Rows
    for (int i = 0; i < n - 1; i++)
    {
        // Space
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        // Asterisk
        cout << "*";

        // Condition --- to avoid extra asterisk at the end
        if (i != n - 2)
        {
            // Space
            for (int j = 0; j < 2 * (n - i) - 5; j++)
            {
                cout << " ";
            }
            // Asterisk
            cout << "*";
        }

        // Next line
        cout << endl;
    }
    // Loop for Bottom part Ends here ------------------------------------

    return 0;
}