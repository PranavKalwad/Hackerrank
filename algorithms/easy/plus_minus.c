void plusMinus(int arr_count, int* arr) {
    
    double plus=0;
    double minus=0;
    double zero=0;
    for(int i=0;i<arr_count;i++)
    {
        if(arr[i]>0)
        {
            plus++;
        }
        if(arr[i]<0)
        {
            minus++;
        }
        if(arr[i]==0)
        {
            zero++;
        }
    }
        printf("%f\n",plus/arr_count);
        printf("%f\n",minus/arr_count);
        printf("%f\n",zero/arr_count);

}