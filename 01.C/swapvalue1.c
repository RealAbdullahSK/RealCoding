#include<stdio.h>
void swap(int x,int y){
    int temp;
    temp=x,x=y,y=temp;
    printf("(In created function)After swap ----> a=%d\tb=%d\n",x,y);
};
void swapr(int *x,int *y){
    int temp;
    temp=(*x),(*x)=(*y),(*y)=temp;
    printf("(In created function)After swap ----> a=%d\tb=%d\n",*x,*y);

};
int main(){
    int a=6 , b=4;
    printf("Before swap ----> a=%d\tb=%d\n",a,b);

    swapr(&a,&b);

    printf("(In main function)After swap ----> a=%d\tb=%d\n",a,b);

    return 0;
}