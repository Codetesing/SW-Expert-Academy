
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N; cin >> N;
		vector<int> in(N);
		vector<int> DP(N, 0);

		for (int i = 0; i < N; i++) cin >> in[i];

		DP[0] = in[0];

		for (int i = 1; i < N; i++)
			DP[i] = max(DP[i - 1] + in[i], in[i]);

		int out = *max_element(DP.begin(), DP.end());

		cout << '#' << test_case << ' ' << out << '\n';
	}
	return 0;
}