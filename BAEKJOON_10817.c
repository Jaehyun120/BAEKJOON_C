//BAEKJOON_10817

#include<stdio.h>

void swap(int* arr, int a, int b);
int sort(int* arr, int l, int r);
void qsort(int* arr, int l, int r);

int arr[3];

int main()
{
    scanf(" %d %d %d",&arr[0],&arr[1],&arr[2]);
    
    qsort(arr,0,2);
    
    printf("%d",arr[1]);
    
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