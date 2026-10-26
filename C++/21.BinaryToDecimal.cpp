#include <iostream>
using namespace std;

void BinaryToDecimal(int n)
{
    int remainder, pow = 1, Decimal = 0;
    while (n > 0)
    {
        remainder = n % 10;           // This takes out the last digit of Binary
        n /= 10;                      // This removes the last digit of Binary
        Decimal += (remainder * pow); // This Multiplies the remainder with powers of 2
        pow *= 2;                     // this raises the power of 2
    }
    cout << "Decimal = " << Decimal << endl;
}
int main()
{
    BinaryToDecimal(1111);

    return 0;
}