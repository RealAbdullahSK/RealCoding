#include <stdio.h>
#include <string.h>

// void salt(char pull[]);
void slice(char get[], int m, int n);

int main()
{
    char idk[100]="helloworld";
  

    slice(idk,6,2);//n is 2 and m is 6
    // char password[100];
    // printf("Entr pass:");
    // scanf("%s",password);

    // salt(password);

    return 0;
}
void slice(char get[], int m, int n)
{
    char new[200];
    int j=0;
    for (int i = n ; i < m; i++,j++)
    {
        new[j]=get[i];

    }
     new[j]='\0';
    puts(new);
    
}
// void salt(char pull[])
// {
//     char newpass[200];
//     char salt[]="123";
//     strcpy(newpass,pull);
//     strcat(newpass,salt);
//     puts(newpass);
// }