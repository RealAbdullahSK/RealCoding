#include <stdio.h>
#include<string.h>

// void len(char arr[]);

int main()
{

    // char name[100];
    // fgets(name, 100, stdin);

     char new[]="hellooo";
     char old[]="world";
    // strcpy(new,old);   //replaces second one with first
    // puts(new);
    // strcat(new,old);
    // printf("%s",new);   //merges the second one with first , only if first aray is big enough to store it
   printf("%d", strcmp (new,old));



    return 0;
}
// void len(char arr[])
// {
//     int count = 0;
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         count++;
//     }
//     printf("%d", count);
// }