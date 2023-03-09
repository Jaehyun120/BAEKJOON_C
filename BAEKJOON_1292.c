//BAEKJOON_1292

#include<stdio.h>

int main()
{
   int arr[1001]={0};
   int iv=1;
   int cnt=0;

   for(int i=1;i<=1000;i++)
   {
      if(cnt==iv)
      {
         iv++;
         cnt=0;
      }

      arr[i]=iv;
      cnt++;
   }

   int a=0;
   int b=0;
   int sum=0;
   scanf("%d %d", &a, &b);
   for(int i=a;i<=b;i++)
      sum+=arr[i];

   printf("%d", sum);

   return 0;
}