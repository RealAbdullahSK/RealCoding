//------------------------------------------------------------------------
#include <iostream>
using namespace std;
//------------------------------------------------------------------------
int SumOfN(int n)
{
    int s = 0;
    for (int i = 0; i <= n; i++)
    {
        s += i;
    }
    return s;
}

int FactorialOfN(int n)
{
    int factorial = 1;
    if (n == 0 || n == 1)
    {
        return factorial;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        return factorial;
    }
}
//------------------------------------------------------------------------
int main()
{
    cout << "Sum = " << SumOfN(5) << endl;
    cout << "Factorial = " << FactorialOfN(5) << endl;

    return 0;
}
//------------------------------------------------------------------------