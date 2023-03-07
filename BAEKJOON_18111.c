//BAEKJOON_18111

#include<stdio.h>

int arr[500][500];
int cdt[256][2];

int main()
{
    int n = 0;
    int m = 0;
    int s = 0;
    scanf(" %d %d %d", &n, &m, &s);

    int min = 256;
    int max = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            scanf(" %d", &arr[i][j]);
            min = min <= arr[i][j] ? min : arr[i][j];
            max = arr[i][j] <= max ? max : arr[i][j];
        }

    int mv = -1;
    for (int q = min; q <= max; q++)
    {
        int t = 0;
        int s2 = s;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == q)
                    continue;
                else if (arr[i][j] > q)
                {
                    s2 += (arr[i][j] - q);
                    t += 2 * (arr[i][j] - q);
                }
                else if (arr[i][j] < q)
                {
                    s2 -= (q - arr[i][j]);
                    t += (q - arr[i][j]);
                }
            }

        if (s2 >= 0)
        {
            cdt[q][0] = t;
            cdt[q][1] = q;
            if (mv == -1)
            {
                mv = q;
                continue;
            }

            if (cdt[mv][0] == cdt[q][0])
            {
                mv = mv < q ? q : mv;
                continue;
            }

            mv = cdt[mv][0] < cdt[q][0] ? mv : q;
        }
    }

    printf("%d %d", cdt[mv][0], cdt[mv][1]);

    return 0;
}