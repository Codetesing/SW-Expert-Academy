#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(int a, int b)
{
	return a > b;
}

int main(int argc, char** argv)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		long long ans = 0;
		int N; cin >> N;
		vector<int> value(N);
		for (int i = 0; i < N; i++)
			cin >> value[i];

		sort(value.begin(), value.end(), compare);

		for (int i = 0; i < N; i += 3)
		{
			ans += value[i];
			if (i + 1 < N)
				ans += value[i + 1];
		}

		cout << '#' << test_case << ' ' << ans << '\n';
	}
	return 0;
}