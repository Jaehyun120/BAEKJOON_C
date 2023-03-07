//BAEKJOON_10699

#include<stdio.h>
#include<time.h>

int main()
{
    time_t now;
    struct tm* t;
    now = time(NULL);
    t = localtime(&now);

    printf("%d-%d-%d", t->tm_year+1900, t->tm_mon+1, t->tm_mday);

    return 0;
}