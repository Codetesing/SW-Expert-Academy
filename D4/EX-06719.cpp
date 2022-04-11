
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
		int N, K; cin >> N >> K;
		vector<int> score(N);
		for (int i = 0; i < N; i++) cin >> score[i];
		
		sort(score.begin(), score.end());

		double sum = 0;
		for (int i = 0; i < K; i++)
			sum = (sum + score[N - K + i]) / 2;

		cout << '#' << test_case << ' ' << sum << '\n';
	}
	return 0;
}