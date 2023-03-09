//BAEKJOON_2750

#include<stdio.h>

void swap(int* arr, int a, int b);
int sort(int* arr, int l, int r);
void qsort(int* arr, int l, int r);

int arr[1000];

int main()
{
    int n=0;
    scanf(" %d",&n);
    
    for(int i=0;i<n;i++)
        scanf(" %d",&arr[i]);
    
    qsort(arr,0,n-1);
    
    for(int i=0;i<n;i++)
        printf("%d\n",arr[i]);
    
    return 0;
}

void swap(int* arr, int a, int b)
{
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

int sort(int* arr, int l, int r)
{
    int p = l;
    int lv = l + 1;
    int rv = r;

    while (lv <= rv)
    {
        while ((arr[lv] <= arr[p]) && (lv <= r))
            lv++;
        while ((arr[p] <= arr[rv]) && (l+1 <= rv))
            rv--;
        if (lv <= rv)
            swap(arr, lv, rv);
    }
    swap(arr, p, rv);

    return rv;
}

void qsort(int* arr, int l, int r)
{
    if (l <= r)
    {
        int p = sort(arr, l, r);
        qsort(arr, l, p - 1);
        qsort(arr, p + 1, r);
    }
}