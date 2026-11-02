#include <iostream>
using namespace std;

void func()
{
    // This will create x seprately
    static int x;
    cout << "x = " << x << endl;
    x++;
}

int main()
{
    func();
    func();
    func();
    func();
    func();

    return 0;
}