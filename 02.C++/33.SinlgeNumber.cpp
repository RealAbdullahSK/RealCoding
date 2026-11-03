#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // we have to take out the sinlge ,non duplicate number in output
    vector<int> vec = {2, 1, 4, 1, 2};
    cout << "Input : ";
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
    int answer = 0;
    for (int val : vec)
    {
        answer = answer ^ val;
    }
    cout << "Output : " << answer << endl;

    return 0;
}