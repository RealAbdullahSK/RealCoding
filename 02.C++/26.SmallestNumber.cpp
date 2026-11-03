#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int Number[] = {3, 45, 65, 7, 2, 3, -43, -32};
    int size = sizeof(Number) / sizeof(int);

    // This puts the max number in int
    int smallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        // This checks the smallest number and assigns to the variable
        smallest = min(Number[i], smallest);
    }
    cout << "Smallest Number in Array is : " << smallest << endl;

    return 0;
}

// This does the function of min
/*
// This check if number is smaller than the variable
        if (Number[i] < smallest)
        {
            // This assigns the number to the variable
            smallest = Number[i];
        }
*/