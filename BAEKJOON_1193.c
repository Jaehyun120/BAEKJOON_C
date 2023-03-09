//BAEKJOON_1193

#include<stdio.h>

int main()
{
   int n=0;
   scanf("%d", &n);

   int i=1;
   for(;i<n;i++)
      n-=i;

   if(i%2==0)
      printf("%d/%d", n, i-n+1);
   else if(i%2==1)
      printf("%d/%d", i-n+1, n);
   return 0;
}