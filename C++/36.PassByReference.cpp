#include <iostream>
using namespace std;

// Pass by reference - using pointers
void ChangeA(int *ptr)
{
    // Here we accessed the address value to directly change the value in main function
    *ptr = 20;
}

//Pass by reference - using alias
void ChangeB(int &a){
    a = 25;
}

int main()
{
    int a = 10;
    int b = 15;

    cout << "---------------------------------------------------" << endl;
    cout << "---------------------------------------------------" << endl;

    cout << "in main function : 'a' " << endl;

    cout << "Value before function call : " << a << endl;

    // And we passed the value address to function
    ChangeA(&a);

    cout << "Value after function call  : " << a << endl;

    cout << "---------------------------------------------------" << endl;
    
    cout << "in main function : 'b' " << endl;

    cout << "Value before function call : " << b << endl;

    ChangeB(b);

    cout << "Value after function call  : " << b << endl;

    cout << "---------------------------------------------------" << endl;
    cout << "---------------------------------------------------" << endl;
    return 0;
}
