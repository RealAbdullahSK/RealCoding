#include <stdio.h>
int facto(int n);
int main()
{
    printf("sum is :%d", facto(5));

    return 0;
}
int facto(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumi1 = facto(n - 1);
    int sumN = sumi1 * n;
    return sumN;
}