//BAEKJOON_1152

#include<stdio.h>

int main()
{
   char arr[1000000]={0};
   int cnt=-1;
   int k=0;

   while(k!=-1)
   {
      k=scanf("%s", &arr[0]);
      cnt++;
   }

   printf("%d", cnt);

   return 0;
}