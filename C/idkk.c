#include<stdio.h>

int main(){
    int num1,num2,num3;
    printf("Enter Num1:");
    scanf("%d",&num1);
    printf("Enter Num2:");
    scanf("%d",&num2);
    printf("Enter Num3:");
    scanf("%d",&num3);


    (num1>num2 && num1>num3)? printf("Num1 is greater") :
    (num2>num1 && num2>num3)? printf("Num2 is greater") :
    (num1==num2 && num1==num3)? printf("All numbers are equal") :
    printf("Num3 is greater");




    return 0;
}