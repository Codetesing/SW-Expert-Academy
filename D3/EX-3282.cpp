#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
#include<algorithm>

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
		int N, K; cin >> N >> K;
		vector<int> V(N + 1);
		vector<int> C(N + 1);
		int DP[101][1001] = { 0 };

		for (int i = 1; i <= N; i++)
			scanf("%d %d", &V[i], &C[i]);

		for(int i = 1; i <= N; i++)
			for (int j = 1; j <= K; j++)
			{
				if (V[i] > j)
					DP[i][j] = DP[i - 1][j];
				else
					DP[i][j] = max(C[i] + DP[i - 1][j - V[i]], DP[i - 1][j]);
			}

		printf("#%d %d\n", test_case, DP[N][K]);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}