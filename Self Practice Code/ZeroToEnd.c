#include <stdio.h>
void pushZerosToEnd(int arr[], int n) {
    int nonzero=0;
        
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[nonzero]=arr[i];
            nonzero++;
        }
    }
    for(int i=nonzero;i<n;i++)
    {
        arr[i]=0;
    }
}

int main() {
    
    int arr[]={1,0,2,0,3,0,4};
    int n=7;
    
    pushZerosToEnd(arr, n);
    
    printf("The array after pushing zeros to the end is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}