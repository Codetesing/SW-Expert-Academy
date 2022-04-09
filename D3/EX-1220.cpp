
#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int test_case;
	int T = 10;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N; cin >> N;
		vector<vector<int>> map(N, vector<int>(N));
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				cin >> map[i][j];

		int cnt = 0;
		for (int i = 0; i < N; i++)
		{
			int prev = 0;
			for (int j = 0; j < N; j++)
			{
				if (map[j][i] == 2 && prev != 0)
				{
					cnt++;
					prev = 0;
				}
				else if (map[j][i] == 1 && prev == 0)
					prev = 1;
			}
		}

		cout << '#' << test_case << ' ' << cnt << '\n';
	}
	return 0;
}