#include <stdio.h>
#include<string.h>

void swap(int *x, int *y){
    int temp=(*x);
    (*x)=(*y);
   (*y)=temp;
    printf("x=%d\ty=%d\n",(*x),(*y));
}

int main()
{
    int a=5,b=6;
    printf("Before -- a=%d\tb=%d\n\a",a,b);
  
    swap(&a,&b);

      printf("After -- a=%d\tb=%d\n\a",a,b);

    return 0;
}