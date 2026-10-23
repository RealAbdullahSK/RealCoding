#include<stdio.h>
int main(){
    int x,y,temp;
    // x=4 , y=6;
    //wihtout temp
    x=3,y=6;
    printf("Before swap---X=%d\tY=%d\n",x,y);
    // temp=x;x=y;y=temp;
    x=x+y;
    y=x-y;
    x=x-y;
        printf("After swap---X=%d\tY=%d\n",x,y);




    return 0;
}