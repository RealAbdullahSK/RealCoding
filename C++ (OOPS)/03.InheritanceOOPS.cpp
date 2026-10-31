#include <iostream>
#include <string>
using namespace std;
// Whenever Inheritance happens
// Parent class happens first then child class
class person
{
public:
    string name;
    int age;

    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class student : public person
{
public:
    int rollno;

    student(string name, int age, int rollno) : person(name, age)
    {
        this->rollno = rollno;
    }

    void GetInfo()
    {
        cout << "Name   : " << name << endl;
        cout << "Age    : " << age << endl;
        cout << "Rollno : " << rollno << endl;
    }
};

int main()
{
    cout << "----------------------------------------------" << endl;
    cout << "----------------------------------------------" << endl;
    student s1("Abdullah", 18, 143);
    // s1.name = "Abdullah";
    // s1.age = 18;
    // s1.rollno = 143;
    s1.GetInfo();
    cout << "----------------------------------------------" << endl;
    cout << "----------------------------------------------" << endl;

    return 0;
}