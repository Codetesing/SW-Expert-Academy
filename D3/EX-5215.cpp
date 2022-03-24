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
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, L; cin >> N >> L;
		vector<int> T(N + 1);
		vector<int> K(N + 1);
		int DP[21][10001] = { 0 };

		for (int i = 1; i <= N; i++)
			scanf("%d %d", &T[i], &K[i]);

		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= L; j++)
			{
				if (K[i] > j)
					DP[i][j] = DP[i - 1][j];
				else
					DP[i][j] = max(T[i] + DP[i - 1][j - K[i]], DP[i - 1][j]);
			}

		printf("#%d %d\n", test_case, DP[N][L]);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}