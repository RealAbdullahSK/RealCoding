#include <iostream>
using namespace std;
int main()
{
    cout << "--------------------------------------------------------" << endl;

    char str[] = "Real Abdullah";
    int length = 0;

    // This checks until the null character i.e. \0
    for (int i = 0; str[i] != '\0'; i++)
    {

        // This checks for spaces and exclude them
        // strings also counts spaces as characters too we can remove the if function for actual count
        if (str[i] != ' ')
        {
            length++;
        }
    }

    cout << "Length of string is : " << length << endl;

    cout << "--------------------------------------------------------" << endl;
    return 0;
}