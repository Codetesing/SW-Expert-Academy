#include<iostream>
#include<vector>

using namespace std;

int out = 0;
int N, B;

void dfs(vector<int> h, int index, int cur)
{
	if (cur >= B)
	{
		if (out > cur - B)
			out = cur - B;

		return;
	}
	for (int i = index; i < N; i++)
		dfs(h, i + 1, cur + h[i]);
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
		out = 200000;
		cin >> N >> B;
		vector<int> HEIGHT(N);
		for (int i = 0; i < N; i++) cin >> HEIGHT[i];

		dfs(HEIGHT, 0, 0);

		cout << '#' << test_case << ' ' << out << '\n';
	}
	return 0;
}