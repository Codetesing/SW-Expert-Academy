#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, M; cin >> N >> M;
		vector<string> map(N);
		for (int i = 0; i < N; i++) cin >> map[i];
		vector<vector<int>> color_num(N, vector<int>(3, 0));

		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
			{
				if (map[i][j] == 'W')
					color_num[i][0]++;
				else if (map[i][j] == 'B')
					color_num[i][1]++;
				else
					color_num[i][2]++;
			}

		int sum = 0;
		for (int i = 1; i < N - 1; i++)
		{
			for (int j = i; j < N - 1; j++)
			{
				int cnt[3] = { 0 };

				for (int k = 0; k < i; k++)
					cnt[0] += color_num[k][0];
				
				for (int k = i; k <= j; k++)
					cnt[1] += color_num[k][1];

				for (int k = j + 1; k < N; k++)
					cnt[2] += color_num[k][2];

				if (sum < cnt[0] + cnt[1] + cnt[2])
					sum = cnt[0] + cnt[1] + cnt[2];
			}
		}

		int out = N * M - sum;

		cout << '#' << test_case << ' ' << out << '\n';
	}
	return 0;
}