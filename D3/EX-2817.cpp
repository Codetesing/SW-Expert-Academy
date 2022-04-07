
#include<iostream>
#include<vector>

using namespace std;

int cnt, N, K;

void DFS(vector<int> a, int index, int sum)
{
	if (sum > K)
		return;
	else if (sum == K)
	{
		cnt++;
		return;
	}
	
	for (int i = index + 1; i < N; i++)
		DFS(a, i, sum + a[i]);
}

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
		cin >> N >> K;
		cnt = 0;
		vector<int> A(N);

		for (int i = 0; i < N; i++) cin >> A[i];

		DFS(A, -1, 0);

		cout << '#' << test_case << ' ' << cnt << '\n';
	}
	return 0;
}