#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> map(100);

bool horizon(int row, int col, int n)
{
	for (int k = 0; k < n / 2; k++)
		if (map[row][col + k] != map[row][col + n - 1 - k])
			return false;

	return true;
}

bool vertical(int row, int col, int n)
{
	for (int k = 0; k < n / 2; k++)
		if (map[row + k][col] != map[row + n - 1 - k][col])
			return false;

	return true;
}

bool PALINDROME(int n)
{
	for (int i = 0; i < 100; i++)
		for (int j = 0; j <= 100 - n; j++)
			if (horizon(i, j, n))
				return true;

	for (int i = 0; i <= 100 - n; i++)
		for (int j = 0; j < 100; j++)
			if (vertical(i, j, n))
				return true;

	return false;
}

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int test_case;
	int T = 10;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int temp; cin >> temp;

		for (int i = 0; i < 100; i++) cin >> map[i];

		int cnt = 1;
		for (int N = 99; N >= 2; N--)
		{
			if (PALINDROME(N))
			{
				cnt = N;
				break;
			}
		}

		cout << '#' << test_case << ' ' << cnt << '\n';
	}
	return 0;
}