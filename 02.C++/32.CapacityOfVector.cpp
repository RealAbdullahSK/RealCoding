#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "------------------------------------------------------" << endl;
    // vector doubles the capacity after its full
    vector<int> vec;
    cout << "at creation" << endl
         << endl;
    cout << "Vector size : " << vec.size() << endl;
    cout << "Vector capacity : " << vec.capacity() << endl;

    cout << "------------------------------------------------------" << endl;

    vec.push_back(0);
    vec.push_back(1);

    cout << "After 2 values" << endl
         << endl;
    cout << "Vector size : " << vec.size() << endl;
    cout << "Vector capacity : " << vec.capacity() << endl;

    cout << "------------------------------------------------------" << endl;

    vec.push_back(2);

    cout << "AFter 3 values" << endl
         << endl;
    cout << "Vector size : " << vec.size() << endl;
    cout << "Vector capacity : " << vec.capacity() << endl;

    cout << "------------------------------------------------------" << endl;

    vec.push_back(3);
    vec.push_back(4);

    cout << "After 5 values" << endl
         << endl;
    cout << "Vector size : " << vec.size() << endl;
    cout << "Vector capacity : " << vec.capacity() << endl;

    cout << "------------------------------------------------------" << endl;

    return 0;
}