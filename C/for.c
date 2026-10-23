#include <stdio.h>

int odd(int arr[], int n);

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9}, n=9;

    printf("Total odd number is:%d",odd(arr,n));

    return 0;
}
int odd(int arr[], int n)
{

    int C = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2!=0)
        {
            C++;
        }
        
    }
return C;
}