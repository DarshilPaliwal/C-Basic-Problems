int largest(int arr[], int n) {
    int max=-10000000;
    
    if(n==1)
    {
        return arr[0];
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
        return max;
    }
    
}
int main() {
    
    int arr[]={98,65,1,-87,90};
    int n=5;
   
    
    int max_value = largest(arr, n);
    printf("The largest element in the array is: %d\n", max_value);
    
    return 0;
}