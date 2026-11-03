#include <stdio.h>

int main()
{
    int i, j, rows = 100;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("*");
        }
        printf("%d\n",i);
    }

    return 0;
}