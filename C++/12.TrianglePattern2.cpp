#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    cout << "-------------------------------------------------" << endl;

    // Prints Triangle pattern of numbers
    cout << "Triangle pattern of numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
    cout << "-------------------------------------------------" << endl;

    // Prints triangle pattern of numbers but in reverse , kind of
    cout << "Reverse number triangle:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << "-------------------------------------------------" << endl;

    // Prints Reverse Letter triangle
    cout << "Reverse Letter triangle:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {

            cout << char('A' + j - 1);
        }
        cout << endl;
    }
    cout << "-------------------------------------------------" << endl;

    // Floyd's Trianlge pattern
    cout << "Floyd's Traingle pattern:" << endl;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << "  ";
            num++;
        }
        cout << endl;
    }
    cout << "-------------------------------------------------" << endl;

    // Floyd's Trianlge pattern with letters
    cout << "Floyd's Traingle pattern with letters:" << endl;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << "  ";
            ch++;
        }
        cout << endl;
    }
    cout << "-------------------------------------------------" << endl;

    return 0;
}