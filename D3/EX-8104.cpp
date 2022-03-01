#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	setbuf(stdout, NULL);
	scanf("%d", &T);
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, K, n, s;
		scanf("%d %d", &N, &K);
		printf("#%d", test_case);
		n = (N / 2) + (N % 2); // 1행이 끝일 때, 2행이 끝일 때는 n=1 / 3행이 끝일 때, 4행이 끝일 때는 n=2 ...
		s = (2 * K * n + 1) * n; // 수열의 합
		for (int k = 1; k <= K; k++) {
			if (N % 2 == 0) printf(" %d", s);
			else printf(" %d", s - ((N + 1) * K - k + 1)); // 행이 홀수 개일 때
			if (k == K) printf("\n");
		}
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}