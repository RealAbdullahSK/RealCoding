#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Students : public Person
{
public:
    int rollno;
};

// This inherits name and age from students
// and student inherits it from person
class GradStudent : public Students
{
public:
    string ResearchArea;
};

int main()
{
    GradStudent s1;
    s1.name = "Abdullah";
    s1.ResearchArea = "Coding";
    cout << s1.name << endl;
    cout << s1.ResearchArea << endl;

    return 0;
}