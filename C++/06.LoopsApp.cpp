#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    bool isPrime = true;
    cout << "Enter a number to check if its a prime or not:";
    // cout << "Enter a number for sum:";
    // cout << "Enter a number for table:";
    cin >> n;

    // for (int i = 1; i <=10; i++)
    // {
    //     cout << n << "x" << i << "=" << n*i << endl;
    // }

//     for (int i = 1; i <= n; i++)
//     {
// //sums only odd number 
//         if (i % 2 != 0)
//         {
//             sum += i;
//         }
//     }
//     cout << sum;

    for (int i = 2; i*i<= n; i++)
    {
        if (n%i==0){
            isPrime = false;
            break;
        }
    }
    if (isPrime==true)
    {
        cout << n <<" is a prime number";
    } else cout << n << " is not a Prime number";
    
    
    return 0;
}