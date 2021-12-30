#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>

using namespace std;

int CNT_MOS(vector<vector<int>> v, int row, int col, int size)
{
	int sum = 0;

	for (int i = row; i < row + size; i++)
		for (int j = col; j < col + size; j++)
			sum += v[i][j];

	return sum;
}

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
		int N, M, max = -1, cnt;
		cin >> N >> M;

		vector<vector<int>> v(N, (vector<int>)N);

		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				scanf("%d", &v[i][j]);

		for (int i = 0; i <= N - M; i++)
			for (int j = 0; j <= N - M; j++)
			{
				cnt = CNT_MOS(v, i, j, M);
				if (max < cnt)
					max = cnt;
			}
		printf("#%d %d\n", test_case, max);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}