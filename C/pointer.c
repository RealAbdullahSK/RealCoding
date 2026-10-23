#include <stdio.h>

void sq(int n);

void _sq(int *n);

int main()
{
    int number = 3;
    sq(number);
    printf("number is:%d\n", number);

    _sq(&number);
    printf("number is:%d\n", number);
    return 0;
}
void sq(int n)
{

    n = n * n;
    printf("square is:%d\n", n);
}
void _sq(int *n)
{

    *n = (*n) * (*n);
    printf("square is:%d\n", *n);
}