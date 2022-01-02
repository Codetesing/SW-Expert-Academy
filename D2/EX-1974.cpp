#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>

using namespace std;

int N = 10;

bool IS_ROW(vector<vector<int>> v)
{
	for (int i = 1; i < N; i++)
	{
		bool tok[10] = { false };

		for (int j = 1; j < N; j++)
		{
			if (tok[v[i][j]])
				return false;
			else
				tok[v[i][j]] = true;
		}
	}

	return true;
}

bool IS_COL(vector<vector<int>> v)
{
	for (int i = 1; i < N; i++)
	{
		bool tok[10] = { false };

		for (int j = 1; j < N; j++)
		{
			if (tok[v[j][i]])
				return false;
			else
				tok[v[j][i]] = true;
		}
	}

	return true;
}

bool IS_AREA(vector<vector<int>> v)
{
	for (int i = 1; i < N; i += 3)
	{
		for (int j = 1; j < N; j += 3)
		{
			bool tok[10] = { false };
			for (int m = 0; m < 3; m++)
			{
				for (int n = 0; n < 3; n++)
				{
					if (tok[v[i + m][j + n]])
						return false;
					else
						tok[v[i + m][j + n]] = true;
				}
			}
		}
	}

	return true;
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
		int ans = 1;
		vector<vector<int>> v(N, vector<int>(N));

		for (int i = 1; i < N; i++)
			for (int j = 1; j < N; j++)
				scanf("%d", &v[i][j]);

		if (!(IS_ROW(v)))
			ans = 0;
		else
		{
			if (!(IS_COL(v)))
				ans = 0;
			else
				if (!(IS_AREA(v)))
					ans = 0;
		}
		printf("#%d %d\n", test_case, ans);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}