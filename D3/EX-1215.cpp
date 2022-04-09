
#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool horizon(vector<string> map, int row, int col, int n)
{
	for (int k = 0; k < n / 2; k++)
		if (map[row][col + k] != map[row][col + n - 1 - k])
			return false;

	return true;
}

bool vertical(vector<string> map, int row, int col, int n)
{
	for (int k = 0; k < n / 2; k++)
		if (map[row + k][col] != map[row + n - 1 - k][col])
			return false;

	return true;
}


int main(int argc, char** argv)
{
	int test_case;
	int T = 10;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N; cin >> N;
		vector<string> map(8);
		for (int i = 0; i < 8; i++) cin >> map[i];

		int cnt = 0;
		for (int i = 0; i <= 8 - N; i++)
		{
			for (int j = 0; j <= 8 - N; j++)
			{
				if(horizon(map, i, j, N))
					cnt++;
				if(vertical(map, i, j, N))
					cnt++;
			}
		}

		for(int i = 9 - N; i < 8; i++)
			for(int j = 0; j <= 8 - N; j++)
				if (horizon(map, i, j, N))
					cnt++;

		for (int i = 0; i <= 8 - N; i++)
			for (int j = 9 - N; j < 8; j++)
				if (vertical(map, i, j, N))
					cnt++;

		cout << '#' << test_case << ' ' << cnt << '\n';
	}
	return 0;
}