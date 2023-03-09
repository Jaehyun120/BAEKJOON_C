//BAEKJOON_1018

#include<stdio.h>

int main()
{
    int n=0;
    int m=0;
    scanf("%d %d",&n,&m);
    
    char arr[50][51]={0};
    for(int i=0;i<n;i++)
        scanf(" %s",arr[i]);
    
    int c=n-7;
    int r=m-7;
    int mv=64;
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            int b=-1;
            int w=1;
            int cntb=0;
            int cntw=0;
            for(int k=i;k<i+8;k++)
            {
                for(int l=j;l<j+8;l++)
                {
                    if(b==-1&&arr[k][l]=='W')
                        cntb++;
                    if(b==1&&arr[k][l]=='B')
                        cntb++;
                    if(w==1&&arr[k][l]=='B')
                        cntw++;
                    if(w==-1&&arr[k][l]=='W')
                        cntw++;
                    
                    b*=(-1);
                    w*=(-1);
                }
                
                b*=(-1);
                w*=(-1);
            }
            
            mv=cntb<=mv?cntb:mv;
            mv=cntw<=mv?cntw:mv;
        }
    }
    
    printf("%d",mv);
    
    return 0;
}