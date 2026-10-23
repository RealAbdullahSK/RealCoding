#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6},n=6;
   for (int i = 0; i < n/2; i++)
   {
    int FV=arr[i];
    int SV=arr[n-i-1];
    arr[i]=SV;
    arr[n-i-1]=FV;
   }
   for (int i = 0; i < n; i++)
   {
    printf("%d",arr[i]);
   }
   
   


    return 0;
}