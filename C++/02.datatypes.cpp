#include<iostream>
using namespace std;
int main(){
    int age=25;
    char ch='A';
    float PI=3.14f; //IF there is no "f" then computer thinks of it as double value
    bool isSafe = true; //true or false only that is 1 and 0 , bool means Boolean
    double num=199.99; //It stores double than float and default values stored of a number is double without datatype
    cout << age << endl;
    cout << sizeof(age) << endl;
    cout << PI << endl;
    cout << ch << endl;
    cout << isSafe << endl;

    //type casting
    int smallPI=(int)PI;
    cout << smallPI << endl;


    return 0;
}