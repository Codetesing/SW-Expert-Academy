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
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, K, n, s;
		scanf("%d %d", &N, &K);
		printf("#%d", test_case);
		n = (N / 2) + (N % 2); // 1���� ���� ��, 2���� ���� ���� n=1 / 3���� ���� ��, 4���� ���� ���� n=2 ...
		s = (2 * K * n + 1) * n; // ������ ��
		for (int k = 1; k <= K; k++) {
			if (N % 2 == 0) printf(" %d", s);
			else printf(" %d", s - ((N + 1) * K - k + 1)); // ���� Ȧ�� ���� ��
			if (k == K) printf("\n");
		}
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}