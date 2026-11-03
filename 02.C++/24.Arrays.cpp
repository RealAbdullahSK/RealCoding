#include <iostream>
using namespace std;
int main()
{
    cout << "---------------------------------------------------------" << endl;
    int marks[5] = {67, 87, 45, 98, 55};

    // Index of Arrays starts from 0 and ends at n-1
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    cout << "---------------------------------------------------------" << endl;

    // And we also don't have to define, how many values we want in arrays too
    double price[] = {499.99, 679.00, 200.00};

    // We can also know the size of Arrays
    cout << "Size of marks is " << sizeof(marks) << endl;               // This gives total bytes stored
    cout << "values stored is " << sizeof(marks) / sizeof(int) << endl; // this gives how many values are in arrays`
    cout << "---------------------------------------------------------" << endl;

    // We can also print it using loops
    // int size = sizeof(marks)/sizeof(int);
    // we can use the trick above to get size or directly type the value in for loop
    for (int i = 0; i < 5; i++)
    {
        cout << "Marks(" << i + 1 << ") = " << marks[i] << endl;
    }
    cout << "---------------------------------------------------------" << endl;

    return 0;
}