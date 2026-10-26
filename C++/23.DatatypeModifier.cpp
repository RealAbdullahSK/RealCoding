#include <iostream>
using namespace std;
int main()
{
    // The sizes differ from type of computer architecture
    cout << "-----------------------------------------------------" << endl;

    cout << "Size of 'int' = " << sizeof(int) << endl;

    cout << "-----------------------------------------------------" << endl;
    
    cout << "Size of 'short int' = " << sizeof(short int) << endl;

    cout << "Size of  'long int' = " << sizeof(long int) << endl;

    //'long long' also means 'long long int'
    cout << "Size of  'long long int' = " << sizeof(long long int) << endl;

    cout << "-----------------------------------------------------" << endl;

    //'signed' and 'unsigned' doesn't increases the size but
    //unsigned makes the datatype only positive , so no negatives can be stored
    //and signed is normally how int and other datatype works
    cout << "Size of 'signed int' = " << sizeof(signed int) << endl;
    cout << "Size of 'unsigned int' = " << sizeof(unsigned int) << endl;

    cout << "-----------------------------------------------------" << endl;

    return 0;
}