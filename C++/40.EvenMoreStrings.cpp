#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "--------------------------------------------------------" << endl
         << "--------------------------------------------------------" << endl;

    // string is Dynamic and can be changed any time and can be performed arithmetic operations
    string str1 = "Real";
    string str2 = "Abdullah";

    cout << "str1 : " << str1 << endl;
    cout << "str2 : " << str2 << endl;

    cout << "--------------------------------------------------------" << endl;

    // Concatenation --concat
    cout << "Concat : " << endl;
    string str3 = str1 + str2;
    cout << "str3 = str1+str2 : " << str3 << endl;
    cout << "--------------------------------------------------------" << endl;

    // Comparision
    // This compares not according to length but according to character wise
    cout << "Comparsion : " << endl;
    cout << "Str1 == str2 : " << (str1 == str2) << endl;
    cout << "Str1 != str2 : " << (str1 != str2) << endl;
    cout << "Str1 > str2  : " << (str1 > str2) << endl;
    cout << "Str1 < str2  : " << (str1 < str2) << endl;

    cout << "--------------------------------------------------------" << endl;

    // string length
    cout << "String Length : " << endl;
    cout << "str1 length : " << str1.length() << endl;
    cout << "str2 length : " << str2.length() << endl
         << endl;

    cout << "StringLength comparision :" << endl;
    cout << "str1.length > str2.length : " << (str1.length() > str2.length()) << endl;
    cout << "str1.length < str2.length : " << (str1.length() < str2.length()) << endl;

    cout << "--------------------------------------------------------" << endl
         << "--------------------------------------------------------" << endl;
    return 0;
}