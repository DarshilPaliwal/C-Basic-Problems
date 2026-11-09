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
int main() {
    
    int arr[]={1,2,3,4,5};
    int size=5;
    
    int total_sum = arraySum(arr, size);
    printf("The sum of the array elements is: %d\n", total_sum);
    
    return 0;
}