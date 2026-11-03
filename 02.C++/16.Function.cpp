#include <iostream>
using namespace std;

// Definition of Function
void PrintHello()
{
    cout << "Hello" << endl;
};

int Sum(int a, int b)//<---These are called parameters
{
    int s;
    s = a + b;
    return s;
}

int main()
{
    // Function call
    PrintHello();

    cout << Sum(5, 20)/*<---And these are arguments*/ << endl;
    return 0;
}