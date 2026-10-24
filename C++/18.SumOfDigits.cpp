#include <iostream>
using namespace std;

int SumOfDigits(int num)
{
    int DigitSum = 0, LastDigit;
    while (num > 0)
    {
        LastDigit = num % 10;  // It outputs the last digit in remainder
        num = num / 10;        // It removes the last digit as INT datatype removes decimals
        DigitSum += LastDigit; // It adds the digit we got in remainder
    }
    return DigitSum;
}
int main()
{
    cout << "Sum os digit of number is : " << SumOfDigits(123) << endl;

    return 0;
}