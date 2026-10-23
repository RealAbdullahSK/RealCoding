//-------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
//-------------------------------------------------------------------------------------------------
struct student
{
    char name[100];
    int rollno;
    float cgpa;
};

typedef struct computerscienceengineering
{
    char name[100];
    int rollno;
    float cgpa;
}cse;


void printinfo(struct student s1);
//-------------------------------------------------------------------------------------------------
int main()
{
    struct student s1 = {"abdullah", 143, 6.8};
    printf("%d\n", s1.rollno);
    struct student *ptr = &s1;

    printf("%d\n", (*ptr).rollno);

    printf("%d\n", ptr->rollno);
    printinfo(s1);

    //typedef stff//-------------------------------------------------------------------------------
    cse c1={"adil",151,9.9};


    return 0;
}
//-------------------------------------------------------------------------------------------------
void printinfo(struct student s1)
{

    printf("%d\n", s1.rollno);
}
//-------------------------------------------------------------------------------------------------