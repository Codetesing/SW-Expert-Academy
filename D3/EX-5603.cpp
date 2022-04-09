
#include<iostream>
#include<vector>
#include<cmath>

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
		vector<int> S(N);

		int sum = 0;
		for (int i = 0; i < N; i++)
		{
			cin >> S[i];
			sum += S[i];
		}

		int eval = sum / N;
		int out = 0;

		for (int i = 0; i < N; i++)
			out += abs(eval - S[i]);

		out /= 2;

		cout << '#' << test_case << ' ' << out << '\n';
	}
	return 0;
}