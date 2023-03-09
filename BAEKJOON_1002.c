//BAEKJOON_1002

#include<stdio.h>

int main()
{
    double x1[1000]={0};
    double y1[1000]={0};
    double r1[1000]={0};
    double x2[1000]={0};
    double y2[1000]={0};
    double r2[1000]={0};
    int n=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%lf %lf %lf %lf %lf %lf",&x1[i],&y1[i],&r1[i],&x2[i],&y2[i],&r2[i]);
    
    for(int i=0;i<n;i++)
    {
        double d=(x2[i]-x1[i])*(x2[i]-x1[i])+(y2[i]-y1[i])*(y2[i]-y1[i]);
        double rm=((r2[i]-r1[i])*(r2[i]-r1[i]));
        double rp=((r2[i]+r1[i])*(r2[i]+r1[i]));
        
        if(x1[i]==x2[i]&&y1[i]==y2[i])
        {
            if(r1[i]==r2[i])
                printf("-1\n");
            else printf("0\n");
        }
        else if(d<rm||d>rp)
            printf("0\n");
        else if(d==rm||d==rp)
            printf("1\n");
        else printf("2\n");
    }
    
    return 0;
}