#include <iostream>
#include <string>
using namespace std;
// Function overloading
class Print
{
public:
    void show(int x)
    {
        cout << "Int = " << x << endl;
    }

    void show(char ch)
    {
        cout << "char = " << ch << endl;
    }
};

int main()
{
    Print p1, p2;
    p1.show(143);
    p2.show('&');

    return 0;
}