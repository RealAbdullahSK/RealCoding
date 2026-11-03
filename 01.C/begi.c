#include <stdio.h>
void swap(int*a , int *b);

int main(){
    int x=5,y=6;
  swap(&x,&y);
    printf("x=%d\n y=%d\n",x,y);
      return 0;

}
void swap(int *a , int *b) {
     (*a)=(*a)+(*b);
    (*b)=(*a)-(*b);
    (*a)=(*a)-(*b);
    
}