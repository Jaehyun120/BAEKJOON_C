//BAEKJOON_2839

#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    int m=n/5;
    int mv=2000;
    
    for(int i=m;i>=0;i--)
    {
        int k=n-5*i;
        if(k%3==0)
        {
            int p=i+(k/3);
            mv=mv>p?p:mv;
        }
    }
    
    if(mv==2000)
    {
        printf("-1");
        return 0;
    }
    
    printf("%d",mv);
    
    return 0;
}