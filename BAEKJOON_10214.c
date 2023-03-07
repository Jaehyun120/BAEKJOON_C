//BAEKJOON_10214

#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d", &n);
    
    for(int i=0;i<n;i++)
    {
        int y=0;
        int k=0;
        
        for(int m=0;m<9;m++)
        {
            int p=0;
            int q=0;
            scanf("%d %d",&p,&q);
            y+=p;
            k+=q;
        }
        
        if(y>k)
            printf("Yonsei\n");
        else if(y<k)
            printf("Korea\n");
        else if(y==k)
            printf("Draw\n");
    }
    
    return 0;
}