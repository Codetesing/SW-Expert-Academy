
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
		int N, M, K; cin >> N >> M >> K;
		vector<int> ARRIVE_TIME(N);
		for (int i = 0; i < N; i++) cin >> ARRIVE_TIME[i];

		sort(ARRIVE_TIME.begin(), ARRIVE_TIME.end());

		bool flag = true;
		for(int i = 0; i < N; i++)
			if (K * (ARRIVE_TIME[i] / M) < i + 1)
			{
				flag = false;
				break;
			}

		if (flag)
			cout << '#' << test_case << ' ' << "Possible" << '\n';
		else
			cout << '#' << test_case << ' ' << "Impossible" << '\n';
	}
	return 0;
}