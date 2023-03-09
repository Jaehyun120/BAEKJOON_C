//BAEKJOON_1157

#include<stdio.h>

int main()
{
   int cnt[26]={0};
   char arr[1000000]={0};
   scanf("%s", &arr[0]);

   int i=0;
   while(arr[i]!='\0')
   {
      int cmt=arr[i];
      if(65<=cmt&&cmt<=90)
         cnt[cmt-65]+=1;
      else if(97<=cmt&&cmt<=122)
         cnt[cmt-97]+=1;
      i++;
   }

   int max=0;
   for(int j=1;j<26;j++)
      max=cnt[max]<=cnt[j]?j:max;

   int ncnt=0;
   for(int k=0;k<26;k++)
      if(cnt[k]==cnt[max])
         ncnt++;

   if(ncnt==1)
      printf("%c", max+65);
   else
      printf("?");

   return 0;
}