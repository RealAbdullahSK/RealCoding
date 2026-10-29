#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "----------------------------------------------" << endl;
    cout << "----------------------------------------------" << endl;
    string str = "Real Abdullah";

    // for loop
    cout << "for loop : " << endl << endl;
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    // for each loop
    cout << "for each loop : " << endl << endl;
    for (char i : str)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << "----------------------------------------------" << endl;
    return 0;
}