#include<stdio.h>
#include<cstring>
#define MAX 999
int table[1000]; // 소수확인정보
int visit[1001][1001];
int main()
{
    int test_case;
    int tmp;
    table[MAX] = 1; // 1은 소수 아닌것
    for (int i = 2; i <= 499; i++)
    {
        tmp = 2;
        while (i * tmp <= MAX)
        {
            table[i * tmp] = 1;
            tmp++;
        }
    } // 소수체킹 완료
    scanf("%d", &test_case);
    for (int t = 1; t <= test_case; t++)
    {
        int ret = 0;
        int N;

        scanf("%d", &N);
        for (int a = 2; a <= N - 4; a++)
        {
            for (int b = 2; b <= N - a - 2; b++)
            {
                int c = N - a - b;
                if (!table[a] && !table[b] && !table[c] && !visit[a][b] && !visit[a][c])
                {
                    ret++;
                    visit[a][b] = visit[b][a] = 1;
                    visit[a][c] = visit[c][a] = 1;
                }
            }
        }
        memset(visit, 0, sizeof(visit));
        printf("#%d %d\n", t, ret);
    }
}
