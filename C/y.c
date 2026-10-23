#include <stdio.h>

void PN(int arr[], int n);

int main()
{
    int arr[] = {1,2,3,4};
    PN(arr,4);

    return 0;
}
void PN(int arr[], int n){
    for (int i = 0; i <n; i++)
    {
        printf("%d \t",arr[i]);
    }
    
}