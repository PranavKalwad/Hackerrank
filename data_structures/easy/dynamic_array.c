int main()
{
    int sum[16];
    int k=0;
    int arr[6][6];
    for(int i=0;i<6;++i)
    {
        for(int j=0;j<6;++j)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<4;++i)
    {
        for(int j=1;j<5;++j)
        {
            sum[k]=arr[i][j-1]+arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+2][j-1]+arr[i+2][j]+arr[i+2][j+1];
            k++;
        }
    }
    int max=sum[0];
    for(int i=1;i<16;++i)
    {
        if(max<sum[i])
        {
            max=sum[i];
        }
    }
    printf("%d",max);
}