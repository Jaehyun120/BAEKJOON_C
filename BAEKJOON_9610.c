//BAEKJOON_9610

#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    
    int q1=0;
    int q2=0;
    int q3=0;
    int q4=0;
    int ax=0;
    
    int a=0;
    int b=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        
        if(a>0)
        {
            if(b>0)
                q1++;
            if(b<0)
                q4++;
        }
        if(a<0)
        {
            if(b>0)
                q2++;
            if(b<0)
                q3++;
        }
        if(a==0||b==0)
            ax++;
    }
    
    printf("Q1: %d\n",q1);
    printf("Q2: %d\n",q2);
    printf("Q3: %d\n",q3);
    printf("Q4: %d\n",q4);
    printf("AXIS: %d",ax);
    
    return 0;
}