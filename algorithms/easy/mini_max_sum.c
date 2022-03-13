void swap(int *x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void miniMaxSum(int arr_count, int* arr) {
    long int minSum=0,maxSum=0;
    bool swapped;
    for(int i=0;i<arr_count;i++)
    {
        swapped=false;
        for(int j=0;j<arr_count-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                swapped=true;
            }
        }
    }
    if(swapped==false)
    {
        
    } 
    for(int i=0;i<arr_count-1;i++)
    {
        minSum+=arr[i];
    }
    for(int i=1;i<arr_count;i++)
    {
        maxSum+=arr[i];
    }
    printf("%lu\t%lu",minSum,maxSum);
}