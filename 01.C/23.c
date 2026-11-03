#include <stdio.h>

int main()
{
    int age=23;
    int aage=24;
    int *pptr=&aage;
    int *ptr=&age;
    printf("differene is %u\n",ptr-pptr);
    ptr++;
    printf("%u",ptr);
    

    return 0;
}