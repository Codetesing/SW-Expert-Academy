#define MOD 1000000000

#include<iostream>

using namespace std;

int DP[101][10][1 << 10];

void BIT_MASK()
{
	for (int i = 1; i < 10; i++)
		DP[1][i][1 << i] = 1;

	for(int i = 0; i < 100; i++)
		for(int j = 0; j < 10; j++)
			for (int k = 0; k < 1024; k++)
			{
				if(j != 0)
					DP[i + 1][j][(1 << j) | k] = (DP[i + 1][j][(1 << j) | k] + DP[i][j - 1][k]) % MOD;
				if(j != 9)
					DP[i + 1][j][(1 << j) | k] = (DP[i + 1][j][(1 << j) | k] + DP[i][j + 1][k]) % MOD;
			}
}

int STAIR_NUM(int n)
{
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		sum += DP[n][i][1023];
		sum %= MOD;
	}

	return sum;
}

int main(int argc, char** argv)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int test_case;
	int T;

	cin >> T;

	BIT_MASK();

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N; cin >> N;
		int out;

		if (N < 10)
			out = 0;
		else
			out = STAIR_NUM(N);

		cout << '#' << test_case << ' ' << out << '\n';
	}
	return 0;
}