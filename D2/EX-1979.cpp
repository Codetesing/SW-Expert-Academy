#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>

using namespace std;

bool IS_INSERT_ROW(vector<vector<int>> v, int row, int col, int k)
{
	if (v[row][col - 1])
		return false;

	for (int i = 0; i < k; i++)
		if (!v[row][col + i])
			return false;
	if(v[row][col + k])
		return false;
	return true;
}

bool IS_INSERT_COL(vector<vector<int>> v, int row, int col, int k)
{
	if (v[row - 1][col])
		return false;

	for (int i = 0; i < k; i++)
		if (!v[row + i][col])
			return false;
	if (v[row + k][col])
		return false;
	return true;
}

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
		int N, K;
		int row, col;

		cin >> N >> K;

		vector<vector<int>> v(N + 2, (vector<int>)(N + 2));

		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				scanf("%d", &v[i][j]);

		int cnt = 0;
		int tok = 0;

		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N - K + 1; j++)
				if (v[i][j])
					if (IS_INSERT_ROW(v, i, j, K))
						cnt++;

		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N - K + 1; j++)
				if (v[j][i])
					if (IS_INSERT_COL(v, j, i, K))
						cnt++;

		printf("#%d %d\n", test_case, cnt);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}