#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

void nCr(int n, int r)
{
    if (n > r && r > 0)
    {
        int fact_n = factorial(n);
        int fact_r = factorial(r);
        int fact_nMr = factorial(n - r);
        cout << "Binomial coefficient is : " << ((fact_n) / (fact_r * fact_nMr)) << endl;
    }
    else if (n == r || r == 0)
    {
        cout << "Binomial coefficient is : 1" << endl;
    }
    else if (n < r)
    {
        cout << "'n' can not be smaller than 'r'" << endl;
    }
    else
        cout << "Invalid Input" << endl;
}

int main()
{
    nCr(8, 6);
    return 0;
}