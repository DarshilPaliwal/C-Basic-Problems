#include<stdio.h>

int arraySum(int arr[], int size) 
{
    int sum=0;
    
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = arraySum(arr, n);
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}