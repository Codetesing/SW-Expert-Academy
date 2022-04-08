#define MAX 10001

#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	int map[301][301] = { 0 };

	int cnt = 1;
	for (int i = 1; i <= 300; i++)
	{
		map[i][1] = cnt;
		for (int j = 2; j <= 300; j++)
			map[i][j] = map[i][j - 1] + i + j - 1;
		cnt += i;
	}

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int p, q; cin >> p >> q;

		int a = 0, b = 0, c = 0, d = 0;
		for (int diag = 1; ; diag++)
		{
			for (int i = 1; i <= diag; i++)
			{
				if (map[diag + 1 - i][i] == p)
				{
					a = diag + 1 - i;
					b = i;
				}
				if (map[diag + 1 - i][i] == q)
				{
					c = diag + 1 - i;
					d = i;
				}
			}

			if ((a != 0) && (c != 0))
				break;
		}

		a += c;
		b += d;

		cout << '#' << test_case << ' ' << map[a][b] << '\n';
	}
	return 0;
}