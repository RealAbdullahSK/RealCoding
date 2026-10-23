#include <stdio.h>

struct student
{
    int rollno;
    float cgpa;
    char name[100];
};

int main()
{
    int i=1;
        struct student s[i];
    for (int i = 1; i < 3; i++)
    {
        struct student s[i];
        printf("Enter roll no:");
        scanf("%d",s[i].rollno);
        printf("Enter cgpa:");
        scanf("%f",s[i].cgpa);
        printf("Enter Name:");
        fgets(s[i].name,100,stdin);
    }
    printf("-------------\n");
    for (int i = 1; i < 3; i++)
    {
        printf("%d",s[i].rollno);
        printf("%f",s[i].cgpa);
        puts(s[i].name);
    }
    
    

    return 0;
}
