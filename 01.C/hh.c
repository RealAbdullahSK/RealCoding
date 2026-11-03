#include <stdio.h>
#include <string.h>
int main()
{
    //name and roll number of students
    char name[5][20];
    int rollno[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter name :");
        fgets(name,i,stdin);
        printf("Enter Roll number :");
        scanf("%d",&rollno[i]);


        // printf("Enter name :");
        // scanf("%s",&name[i]);
        // printf("Enter Roll number :");
        // scanf("%d",&rollno[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("--------------------\n");
        puts(name[i]);
        printf("rollno:%d\n",rollno[i]);

        // printf("--------------------\n");
        // printf("Name:%s\n",name[i]);
        // printf("rollno:%d\n",rollno[i]);
        

    }
    
    printf("--------------------\n");
    

    return 0;
}