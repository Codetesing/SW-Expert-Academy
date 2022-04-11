
#include<iostream>
#include<vector>
#include<algorithm>

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
		int N; cin >> N;
		vector<int> num(N);
		for (int i = 0; i < N; i++) cin >> num[i];

		sort(num.begin(), num.end());

		int out;
		if (N % 2 == 1)
			out = num[N / 2] * num[N / 2];
		else
			out = num[0] * num[N - 1];

		cout << '#' << test_case << ' ' << out << '\n';
	}
	return 0;
}