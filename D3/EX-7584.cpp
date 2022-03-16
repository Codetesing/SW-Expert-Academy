#include <stdio.h>
//2020.02.17 ±‚¡ÿ 1µÓ
int main(void) {
    register int test_case;
    int T;
    long long N;
    scanf("%d", &T);
    for (test_case = 1; test_case <= T; test_case++) {
        scanf("%lld", &N);
        while (~N & 1)
            N >>= 1;
        printf("#%d %d\n", test_case, ~(~(N - 1) >> 1) & 1);
    }
    return 0;
}