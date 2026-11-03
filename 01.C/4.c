#include <stdio.h>

void cal(int a, int b, int *sum, int *prod , int *avg);

int main()
{
    int a=4, b=5;
    int sum , prod, avg;

cal(a,b,&sum,&prod,&avg);
printf("sum=%d\nproduct=%d\naverage=%d",sum,prod,avg);

    return 0;
}
void cal(int a, int b, int *sum, int *prod , int *avg){

    *sum= a+b;
    *prod = a*b;
    *avg= (a+b)/2;
}