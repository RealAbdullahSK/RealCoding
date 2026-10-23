#include <stdio.h>
#include<string.h>
int main()
{
    char str1[]="HHHB";
    char str2[]="HHHA";

   int comp= strcmp(str1,str2);
   if (comp==0)
   {
    printf("equal");
   } else if (comp <0)
   {
    printf("String 2 is greater");
   } else {printf("String 1 is greater");}
   
   

    return 0;
}