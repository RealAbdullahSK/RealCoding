#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;

    // What will it print?
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 3) << endl;
    ptr++;
    cout << *ptr << endl;

    return 0;
}