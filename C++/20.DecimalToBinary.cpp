#include <iostream>
using namespace std;

void DecimalToBinary(int n)
{
    int remainder, Binary = 0, Pow = 1;
    while (n > 0)
    {
        remainder = n % 2;           // This takes out remainder and it is Either 1 or 0
        n /= 2;                      // This divides the number by 2
        Binary += (remainder * Pow); // This positions the binary results digit by digit
        Pow *= 10;                   // This increase the power by 1
    }
    cout << "Binary" << " = " << Binary << endl;
}
int main()
{
    DecimalToBinary(15);

    return 0;
}