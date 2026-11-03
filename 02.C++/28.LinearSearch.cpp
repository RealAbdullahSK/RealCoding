#include <iostream>
using namespace std;

int SearchArray(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {4, 5, 6, 3, 2, 8};
    int target = 2;
    cout << SearchArray(arr, 6, target) << endl;

    return 0;
}