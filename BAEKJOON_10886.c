//BAEKJOON_10886

#include<stdio.h>

int main()
{
    int n=0;
    scanf(" %d",&n);
    
    int c=0;
    int nc=0;
    for(int i=0;i<n;i++)
    {
        int k=0;
        scanf(" %d",&k);
        
        if(k==0)
            nc++;
        else if(k==1)
            c++;
    }
    
    if(c>nc)
        printf("Junhee is cute!");
    else if(c<nc)
        printf("Junhee is not cute!");
        
    return 0;
}