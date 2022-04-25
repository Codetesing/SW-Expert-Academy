#define MAX 1000000007

#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int test_case;
	int T;
	long long FACT[1001] = { 0, 1 };
	long long DP[1001] = { 0 };
	int max_ind = 0;

	for (int i = 2; i <= 1000; i++)
		FACT[i] = (FACT[i - 1] * i) % MAX;
	
	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N; cin >> N;
		if (N != 1 && DP[N] == 0)
		{
			for (int i = max_ind + 1; i <= N; i++)
				DP[i] = (i * DP[i - 1] + (i / 2) * FACT[i - 1]) % MAX;
			max_ind = N;
		}

		cout << '#' << test_case << ' ' << DP[N] << '\n';
	}
	return 0;
}