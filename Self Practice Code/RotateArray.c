#include<stdio.h>

void rotate(int arr[], int n) 
{
    if(n==1)
    {
        return;
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
            int temp=arr[i];
            arr[i]=arr[n-1];
            arr[n-1]=temp;
        }
    }
}
int main() {
    
    int arr[]={1,2,3,4,5};
    int n=5;
    
    rotate(arr, n);
    
    printf("The rotated array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}