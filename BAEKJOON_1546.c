//BAEKJOON_1546

#include<stdio.h>

int main()
{
   int n=0;
   int arr[1000]={0};
   int mx=0;
   scanf("%d", &n);
   for(int i=0;i<n;i++)
   {
      scanf("%d", &arr[i]);
      mx=mx>=arr[i]?mx:arr[i];
   }

   double sum=0;
   for(int i=0;i<n;i++)
      sum+=(double)arr[i]/mx*100;

   printf("%lf", sum/n);

   return 0;
}