#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    float salary;

    // Access - public | private(Default) | protected
public:
    // Constructor -- its a function that is same name as class
    Teacher() { dept = "IT"; }

    Teacher(string n, string d, string s, double salary)
    {
        name = n;
        dept = d;
        subject = s;
        // this-> | It shows that it is object's properties
        // so we can differentiate between function and object properties
        this->salary = salary;
    }

    // Properties | attributes

    string name;
    string dept;
    string subject;

    // Methods | member function
    void ChangeDepartment(string NewDept)
    {
        dept = NewDept;
    }

    void GetInfo()
    {
        cout << "Name       : " << name << endl;
        cout << "Department : " << dept << endl;
        cout << "Subject    : " << subject << endl;
        cout << "Salary     : " << salary << endl;
    }

    // Not That useful | only for knowledge
    //  setter -- sets private data
    void SetSalary(double s) { salary = s; }
    // getter -- shows private data
    double GetSalary() { return salary; }
};
int main()
{
    cout << "----------------------------------------------" << endl;
    cout << "----------------------------------------------" << endl;
    Teacher T1; // Constructor call
    T1.name = "Abdullah";
    T1.dept = "IT";
    T1.subject = "C++";
    T1.SetSalary(250000);
    cout << T1.name << endl;
    cout << T1.dept << endl;
    cout << T1.subject << endl;
    cout << T1.GetSalary() << endl;

    cout << "----------------------------------------------" << endl;

    Teacher T2("Adil", "IT", "C++", 30000);
    cout << T2.name << endl;
    cout << T2.dept << endl;
    cout << T2.subject << endl;
    cout << T2.GetSalary() << endl;

    cout << "----------------------------------------------" << endl;

    Teacher T3("Rehan", "IT", "C++", 30000);
    // T3.GetInfo();

    cout << "----------------------------------------------" << endl;

    cout << "Copy constructor : " << endl;
    // Copy constructor -- copies properties of one object to another
    // Shallow copy
    Teacher T4(T3);
    T4.GetInfo();

    cout << "----------------------------------------------" << endl;
    cout << "----------------------------------------------" << endl;

    return 0;
}