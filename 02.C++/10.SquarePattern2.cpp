#include <iostream>
using namespace std;
int main()
{
    int n=3, num = 1;

    //Prints square pattern but in continuos form
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }

    //Prints square pattern in ABC form but continuos
    char ch='A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " " ;
            ch++;
        }
        cout << endl;
    }
    
    return 0;
}