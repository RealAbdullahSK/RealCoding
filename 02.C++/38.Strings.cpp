#include <iostream>
using namespace std;
int main()
{
    cout << "--------------------------------------------------------" << endl;
    cout << "--------------------------------------------------------" << endl;
    char str[100];

    // This is use to input more than one word

    // Its format is ---- cin.getline(StringName, size , delim?)

    // delim or delimiter is when the input will be stop , we can put a period '.' or even any symbol or sign
    cout << "Input  : ";
    cin.getline(str, 100);
    cout << endl;
    cout << "Output : " << str << endl;

    cout << "--------------------------------------------------------" << endl;

    // Now here is an example of delimiter
    cout << "Delimiter is a period or fullstop '.'" << endl
         << endl;

    cout << "Input  : ";
    cin.getline(str, 100, '.');
    cout << endl;
    cout << "Output : " << str << endl;

    cout << "--------------------------------------------------------" << endl;
    cout << "--------------------------------------------------------" << endl;
    return 0;
}