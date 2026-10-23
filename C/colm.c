#include <stdio.h>
#include <string.h>

#define TOTAL 3

struct student
{
    char name[100];
    int rollno;
    float cgpa;
};
void pb(int w1, int w2, int w3)
{
    printf("+");
    for (int i = 0; i < w1 + 2; i++){   printf("-"); }
    printf("+");
    for (int i = 0; i < w2 + 2; i++){   printf("-"); }
    printf("+");
    for (int i = 0; i < w3 + 2; i++){   printf("-"); }
    printf("+\n");
}

int main()
{

    struct student s[TOTAL];
    for (int i = 0; i < TOTAL; i++)
    {
        printf("Enter name:");
        fgets(s[i].name, 100, stdin);
        printf("Enter rollno:");
        scanf("%d", &s[i].rollno);
        printf("Enter cgpa:");
        scanf("%f", &s[i].cgpa);
        getchar();
    }
    int w1, w2, w3;
    w1 = strlen("rollno");
    w2 = strlen("name");
    w3 = strlen("cgpa");

    char buffer[100];

    for (int i = 0; i < TOTAL; i++)
    {
        sprintf(buffer,"%d",s[i].rollno);
        if ((int)strlen(buffer)>w1){w1=strlen(buffer);}
        if ((int)strlen(s[i].name)>w2){w2=strlen(s[i].name);}
        sprintf(buffer,"%.2f",s[i].cgpa);
        if ((int)strlen(buffer)>w3){w3=strlen(buffer);}
    }
    pb(w1,w2,w3);
    printf("|%-*s|%-*s|%-*s|\n",w1,"rollno",w2,"name",w3,"cgpa");
    pb(w1,w2,w3);
    for (int i = 0; i < TOTAL; i++)
    {
        printf("|%*d|%-*s|%*.2f|\n",
        w1,s[i].rollno,
        w2,s[i].name,
        w3,s[i].cgpa);
    }
    pb(w1,w2,w3);
    
    

    return 0;
}