#include <stdio.h>
#include <math.h>

int main()
{
    int num, remainder, reversed = 0;
    printf("Enter a number");
    scanf("%d", &num);
    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    printf("reversed number:%d\n",reversed);

    // int rows=10,i,j;
    // for ( i = 1; i <= rows; ++i)
    // {
    //     for ( j = 1; j <= i; ++j)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // int choice;
    // float num1, num2;
    // printf("1.ADD\n");
    // printf("2.SUBTRACT\n");
    // printf("3.MULTIPLY\n");
    // printf("4.DIVIDE\n");
    // printf("Enter a choice:");
    // scanf("%d", &choice);
    // printf("Enter two number:");
    // scanf("%f %f", &num1, &num2);
    // switch (choice)
    // {
    // case 1:
    //     printf("Sum is:%.2f", num1 + num2);
    //     break;
    // case 2:
    //     printf("Difference is:%.2f", num1 - num2);
    //     break;
    // case 3:
    //     printf("Product is:%.2f", num1 * num2);
    //     break;
    // case 4:
    //     printf("Quotient is:%.2f", num1 / num2);
    //     break;
    // default:
    //     printf("INVALID INPUT");
    //     break;
    // }

    // float a, b, c, discriminant, root1, root2;
    // printf("enter coefficients of a,b,c;");
    // scanf("%f %f %f", &a, &b, &c);
    // printf("a=%.2f, b=%.2f, c=%.2f\n", a, b, c);
    // discriminant = pow(b, 2) - (4 * a * c);
    // printf("discriminant=%.2f\n", discriminant);
    // if (discriminant > 0)
    // {
    //     root1 = (-b + sqrt(discriminant)) / (2 * a);
    //     root2 = (-b - sqrt(discriminant)) / (2 * a);
    //     printf("Roots are real and different\n");
    //     printf("root1=%.2f\n", root1);
    //     printf("root2=%.2f\n", root2);
    // }
    // else if (discriminant == 0)
    // {
    //     root1 = root2 = -b / (2 * a);
    //     printf("Roots are real and equal\n");
    //     printf("root1=root2=%.2f\n", root1);
    // }
    // else
    // {
    //     printf("roots are imaginary\n");
    // }

    // int year=2024;
    // if (year % 400 == 0)
    // {
    //     printf("its a leap year");
    // }
    // else if (year % 100 == 0)
    // {
    //     printf("its not a leap year");
    // }
    // else if (year % 4 == 0)
    // {
    //     printf("its a leap year");
    // }
    // else
    // {
    //     printf("its not a leap year");
    // }

    // float num1, num2, num3;
    // printf("Enter num1:");
    // scanf("%f", &num1);
    // printf("Enter num2:");
    // scanf("%f", &num2);
    // printf("Enter num3:");
    // scanf("%f", &num3);
    // int large;
    //  (num1 >= num2 && num1 >= num3)   ? printf("num1:%f is largest", num1)
    //         : (num2 >= num1 && num2 >= num3) ? printf("num2:%f is largest", num2)
    //                                          : printf("num3:%f is largest", num3);

    // float SI,p,r,t;
    // printf("Enter principal amount:");
    // scanf("%f",&p);
    // printf("Enter rate of Interest:");
    // scanf("%f",&r);
    // printf("Enter time:");
    // scanf("%f",&t);
    // printf("SIMPLE INTERST IS:%f",(SI=(p*r*t)/100));
    return 0;
}