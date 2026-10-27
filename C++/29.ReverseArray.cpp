#include <iostream>
using namespace std;
void ReverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        // this 'swap' function swaps the values of two
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    cout << "------------------------------------------" << endl;
    int arr[] = {1, 4, 3, 6, 7, 1, 4, 4};
    int size = 8;
    cout << "Before Swap : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    cout << "------------------------------------------" << endl;

    cout << "After swap : " << endl;
    ReverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}