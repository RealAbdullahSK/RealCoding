#include <iostream>
#include <string>
using namespace std;

class Students
{
public:
    string name;
    int rollno;
};

class Teachers
{
public:
    string subject;
    int salary;
};

class TA : public Students, public Teachers
{
};

int main()
{
    TA t1;
    t1.name = "Simon";
    t1.subject = "C++";
    cout << t1.name << endl;
    cout << t1.subject << endl;

    return 0;
}