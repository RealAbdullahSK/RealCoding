#include <iostream>
#include <string>
#include <algorithm> //for reverse function
using namespace std;
int main()
{
    cout << "----------------------------------------------" << endl;
    cout << "----------------------------------------------" << endl;
    string str = "RealAbdullah";
    int start = 0, end = str.length() - 1;

    cout << "Before Reversing : ";
    cout << str << endl
         << endl;

    for (char ch : str)
    {
        cout << ch << " ";
    }
    cout << endl;

    cout << "----------------------------------------------" << endl;
    while (start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }

    cout << "After Reversing : ";
    cout << str << endl
         << endl;

    for (char ch : str)
    {
        cout << ch << " ";
    }
    cout << endl;

    cout << "----------------------------------------------" << endl;

    // Or we could use the reverse function which is far simple and easy

    cout << "Using reverse function : " << endl;
    reverse(str.begin(), str.end());
    cout << str << endl;
    reverse(str.begin(), str.end());
    cout << str << endl;

    cout << "----------------------------------------------" << endl;
    cout << "----------------------------------------------" << endl;
    return 0;
}