#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "--------------------------------------------" << endl;
    // vector is just like array but , it is dynamic and it doesn't have a fixed size

    // vector<DATATYPE>NAME
    vector<int> vec = {1, 2, 3};
    cout << "vector<int> vec = {1, 2, 3}" << endl;
    cout << vec[0] << " " << vec[1] << " " << vec[2] << endl;

    cout << "--------------------------------------------" << endl;
    // another way to define is
    // vector<int>vec(size,value)
    // ex. vec(3,0)

    vector<int> Ex(3, 0);
    cout << "vector<int> Ex(3, 0)" << endl;
    cout << Ex[0] << " " << Ex[1] << " " << Ex[2] << endl;

    cout << "--------------------------------------------" << endl;
    // Vector has special type of FOR LOOP called
    // for each loop
    // It prints the values of the vector

    cout << "for(int i : vec)" << endl;
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "--------------------------------------------" << endl;

    vector<char> ch = {'a', 'b', 'c'};
    cout << "vector<char> ch = {'a', 'b', 'c'}" << endl;
    for (int i : ch)
    {
        cout << (char)i << " ";
    }
    cout << endl;
    cout << "--------------------------------------------" << endl;

    return 0;
}