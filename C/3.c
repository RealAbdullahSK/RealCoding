#include <stdio.h>

int main()
{
    float price[3];
    printf("Enter a price of item 1:");
    scanf("%f",&price[0]);

     printf("Enter a price of item 2:");
    scanf("%f",&price[1]);

     printf("Enter a price of item 3:");
    scanf("%f",&price[2]);

    printf("total price with GST is :%f",(price[0]+price[1]+price[2])*0.18+(price[0]+price[1]+price[2]));

    return 0;
}