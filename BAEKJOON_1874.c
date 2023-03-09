//BAEKJOON_1874

#include<stdio.h>

int main()
{
   int arr[100000]={0};
   int stk[100000]={0};
   char sg[200000]={'\0'};
   int n=0;
   scanf("%d", &n);
   for(int i=0;i<n;i++)
      scanf("%d", &arr[i]);

   int nn=0;
   int sn=0;
   int gn=0;
   for(int i=0;i<n;i++)
   {
      if(nn>=arr[i]&&arr[i]!=stk[sn-1])
      {
         printf("NO");
         return 0;
      }

      if(nn<arr[i])
         while(nn!=arr[i])
         {
            stk[sn]=nn+1;
            sn++;
            nn++;
            sg[gn]='+';
            gn++;
         }

      stk[sn-1]=0;
      sn--;
      sg[gn]='-';
      gn++;
   }

   for(int i=0;i<gn;i++)
      printf("%c\n", sg[i]);

   return 0;
}