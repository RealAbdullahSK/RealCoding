#include <iostream>
using namespace std;
int main()
{
    // Sum of number divisible by 3 till Nth number
    // int n=20,sum=0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if(i%3==0){
    //         sum+=i;
    //     }
    // }
    // cout << "sum=" <<sum<<endl;

    //Factorial of Nth number
    int n = 5, factorial=1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    cout << "factorial=" << factorial << endl;

    return 0;
}