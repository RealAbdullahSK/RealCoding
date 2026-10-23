#include <stdio.h>

int main()
{
  char name[5][20];
  for (int i = 0; i <=4; i++)
  {
     printf("Enter a name:");
    scanf("%s", &name[i]);
  }
  for (int i = 0; i <=4; i++)
  {
     printf("Name :%s\n", name[i]);
  }
  

    return 0;
}
//MYSELF