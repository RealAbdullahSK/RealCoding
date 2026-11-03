#include <stdio.h>
int fibo(int n);

int main()
{
 printf("the febonacci is:%d",fibo(6));

    return 0;
}
int fibo(int n)
{

    
        if (n == 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return 1;
        }
    
    int n1 = fibo(n - 1);
    int n2 = fibo(n - 2);
    int fib = n1 + n2;
    return fib;
}