#include<stdio.h>

struct student
{
    char name[100];
    int rollno;
    float cgpa;
};


int main(){

    struct student s[3];
    for (int i=0; i < 3; i++)
    {
        printf("Enter name:");
        fgets(s[i].name,100,stdin);
        printf("Enter rollno:");
        scanf("%d",&s[i].rollno);
        printf("Enter cgpa:");
        scanf("%f",&s[i].cgpa);
        getchar();
        
    }
    printf("----------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Name:%s\n",s[i].name); //puts(s[i].name);
        printf("Roll No:%d\n",s[i].rollno);
        printf("Roll No:%f\n",s[i].cgpa);       
        printf("----------------\n");      
    }
    



    return 0;
}