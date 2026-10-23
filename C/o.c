#include <stdio.h>

int main()
{
   int number[5];
   
 
   for (int i = 0; i <=4; i++)
   {
    printf("Enter a number:");
    scanf("%d",&number[i]);
   }
      for (int i = 0; i <=4; i++)
   {
    printf("Entered number is:%d\n",number[i]);
   }
   
    

    return 0;
}