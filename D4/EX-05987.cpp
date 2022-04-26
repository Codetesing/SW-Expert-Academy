#include<iostream>
#include<cstring>

using namespace std;

int N, M;
long long list[17];
long long DP[1 << 17];

long long DFS(int index)
{
	if (index == (1 << (N + 1)) - 2)
		return 1;
	if (DP[index] != 0)
		return DP[index];

	for (int i = 1; i <= N; i++)
	{
		if ((index & 1 << i) > 0)
			continue;
		if ((index & list[i]) != list[i])
			continue;
		DP[index] += DFS(index | 1 << i);
	}

	return DP[index];
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
		memset(list, 0, sizeof(list));
		memset(DP, 0, sizeof(DP));

		cin >> N >> M;

		int start, end;
		for (int i = 0; i < M; i++)
		{
			cin >> start >> end;
			list[end] = list[end] | (1LL << start);
		}
		
		long long out = DFS(0);

		cout << '#' << test_case << ' ' << out << '\n';
	}
	return 0;
}