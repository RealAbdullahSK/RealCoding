#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int Number[] = {3, 45, 65, 7, 2, 3, -43, -32};
    int size = sizeof(Number) / sizeof(int);

    // This puts the min number in int
    int Largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        // This checks the Largest number and assigns to the variable
        Largest = max(Number[i], Largest);
    }

    cout << "Largest Number in Array is : " << Largest << endl;

    // This matches the largest number to check the array index and tells us the index number
    for (int i = 0; i < size; i++)
    {
        if (Largest == Number[i])
        {
            cout << "Index Number[" << i << "]" << endl;
        }
    }
    return 0;
}