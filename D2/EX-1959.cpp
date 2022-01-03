#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, M, MAX = 0;
		
		scanf("%d %d", &N, &M);

		vector<int> A(N);
		vector<int> B(M);

		for (int i = 0; i < N; i++)
			scanf("%d", &A[i]);
		for (int i = 0; i < M; i++)
			scanf("%d", &B[i]);

		if (N > M)
		{
			A.swap(B);
			swap(N, M);
		}

		for (int i = 0; i <= M - N; i++)
		{
			int SUM = 0;
			for (int j = 0; j < N; j++)
				SUM += A[j] * B[i + j];
			if (MAX < SUM)
				MAX = SUM;
		}
		printf("#%d %d\n", test_case, MAX);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}