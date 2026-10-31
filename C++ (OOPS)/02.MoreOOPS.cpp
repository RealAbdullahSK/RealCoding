#include <iostream>
#include <string>
using namespace std;

class Students
{
public:
    string name;
    double *cgpaPtr;

    Students(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Students(Students &obj)
    {
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void GetInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Cgpa : " << *cgpaPtr << endl;
    }

    // Destructor -- Deletes everything in memory after use is complete
    ~Students()
    {
        cout << " hey, i deleted " << endl;
        delete cgpaPtr;
    }
};

int main()
{
    cout << "----------------------------------------------" << endl
         << "----------------------------------------------" << endl;
    Students s1("Abdullah", 8.9);
    // Deep copy constructor
    Students s2(s1);
    s1.GetInfo();
    s2.name = "Adil";
    *s2.cgpaPtr = 9.9;
    s2.GetInfo();

    cout << "----------------------------------------------" << endl
         << "----------------------------------------------" << endl;

    return 0;
}