#include <stdio.h>
#define Red "\033[31m"
int main()
{
    int choice;
    float num1, num2;
    printf("-----------------------------------------------------------------\n");
    printf("Enter Number 1:");
    scanf("%f", &num1);
    printf("Enter Number 2:");
    scanf("%f", &num2);
    printf("-----------------------------------------------------------------\n");
    printf(Red"1.\tAddition\n2.\tSubtraction\n3.\tMultiplication\n4.\tDivision\n");
    printf("-----------------------------------------------------------------\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    printf("-----------------------------------------------------------------\n");

    switch (choice)
    {

    case 1:
        printf("sum is : %.2f\n", num1 + num2);
        break;
    case 2:
        printf("difference is : %.2f\n", num1 - num2);
        break;

    case 3:
        printf("Product is : %.2f\n", num1 * num2);
        break;

    case 4:
        printf("division is : %.2f\n", num1 / num2);
        break;

    default:
        printf("Invalid INPUT\n");
        break;
    }
    printf("-----------------------------------------------------------------\n");
    return 0;
}