#include <iostream>
using namespace std;
int main()
{
    cout << "----------------------------------------------" << endl;
    int size;
    cout << "How Many marks you want to insert : ";
    cin >> size;
    int marks[size];
    cout << "----------------------------------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Marks(" << i + 1 << ") : ";
        cin >> marks[i];
    }
    cout << "----------------------------------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Marks(" << i + 1 << ") : " << marks[i] << endl;
    }
    cout << "----------------------------------------------" << endl;

    return 0;
}