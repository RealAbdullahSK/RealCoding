#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    //Print square pattern of 1 to N number
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    //Print square pattern of asterisk "*"
        for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }


        for (int i = 0; i <= n; i++)
    {
    char ch = 'A';
        for (int j = 0; j <= n; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }

        cout << endl;
    }

    return 0;
}