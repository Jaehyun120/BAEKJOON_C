//BAEKJOON_10950

int main()
{
    int n=0;
    scanf("%d",&n);
    
    int arr[100][2]={0};
    
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&arr[i][0],&arr[i][1]);
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i][0]+arr[i][1]);
    }
    
    return 0;
}