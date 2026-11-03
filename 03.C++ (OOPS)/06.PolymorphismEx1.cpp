#include <iostream>
#include <string>
using namespace std;
// Its an example of polymorphism
// constructor overloading
// It changes depending on the context
class students
{
public:
    string name;

    students() { cout << "Non-Parameterized" << endl; }

    students(string name)
    {
        this->name = name;
        cout << "Parameterized" << endl;
    }
};

int main()
{
    students s1;

    students s2("simon");

    return 0;
}