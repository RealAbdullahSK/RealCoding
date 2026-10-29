#include <iostream>
using namespace std;
int main()
{
    cout << "--------------------------------------------------------" << endl;
    cout << "--------------------------------------------------------" << endl;
    // pointer stores the address of a value
    int a = 10;
    int *ptr = &a;

    // this will print the address of 'a'
    cout << "value of pointer(ptr)   : " << ptr << endl;

    // another way to print address
    cout << "address of 'a'          : " << &a << endl
         << endl;

    // this will print address of pointer
    // and address of pointer is different
    cout << "address of pointer(ptr) : " << &ptr << endl;

    cout << "--------------------------------------------------------" << endl;

    // pointer to pointer
    // This stores the address of a pointer
    int **ParPtr = &ptr;

    cout << "value of pointer to pointer(ParPtr) : " << ParPtr << endl;
    cout << "address of pointer(ptr)             : " << &ptr << endl;

    cout << "--------------------------------------------------------" << endl;

    // * --- Dereference operator
    // This gives value at address

    cout << "Value at (&a)   : " << *(&a) << endl;
    cout << "Value at ptr    : " << *ptr << endl
         << endl;
    cout << "Value at ParPtr    : " << *ParPtr << endl;

    // Here we are getting value of pointer of pointer
    // first we got the value stored in ptr , then we got value stored at 'a'
    cout << "Value at (*ParPtr) : " << *(*ParPtr) << endl;

    cout << "--------------------------------------------------------" << endl;

    // NULL pointer doesn't stores any address
    cout << "NULL Pointer :" << endl;
    int *emt = NULL;
    cout << endl
         << "emt pointer : " << emt << endl;

         
    cout << "--------------------------------------------------------" << endl;
    cout << "--------------------------------------------------------" << endl;

    return 0;
}