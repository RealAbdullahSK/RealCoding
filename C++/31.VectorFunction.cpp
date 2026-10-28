#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "----------------------------------------------" << endl;
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Size Function : " << endl;

    // vector size function ---- VectorName.size()
    cout << "Size = " << vec.size() << endl;

    cout << "----------------------------------------------" << endl;
    // vector push_back function ---- VectorName.push_back(Value to insert)
    // push = add/insert
    vector<int> mt;
    cout << "Push Back Function : " << endl;
    cout << "Vector size before push_back = " << mt.size() << endl;
    mt.push_back(25);
    mt.push_back(35);
    mt.push_back(45);
    cout << "Vector size after push_back = " << mt.size() << endl
         << endl;
    int index = 0;
    for (int i : mt)
    {
        cout << "mt_vector(" << index << ") : " << i << endl;
        index++;
    }
    index = 0;

    cout << "----------------------------------------------" << endl;

    // vector pop_back function ---- VectorName.pop_back() <-- deletes the last value
    // pop = delete/remove
    cout << "Pop Back Function : " << endl;
    cout << "Vector size before pop_back = " << mt.size() << endl;
    mt.pop_back();
    cout << "Vector size after pop_back = " << mt.size() << endl
         << endl;

    for (int i : mt)
    {
        cout << "mt_vector(" << index << ") : " << i << endl;
        index++;
    }
    index = 0;
    cout << "----------------------------------------------" << endl;

    // vector 'front' , 'back' and 'at' function
    // VectorName.front() , VectorName.back() , VectorName.at()

    // front
    //  It prints the very first value , that is at 0 index
    cout << "Front : " << vec.front() << endl;

    // back
    // It prints the last value in the vector
    cout << "Back : " << vec.back() << endl;

    // at
    // It prints the value at the given index
    // Similar to vec[0] , like we do in arrays and vectors , just different method
    cout << "At : " << vec.at(2) << endl;

    cout << "----------------------------------------------" << endl;

    return 0;
}