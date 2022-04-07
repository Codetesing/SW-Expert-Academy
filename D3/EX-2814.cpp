
#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int cnt;
bool visited[11] = { false };

void DFS(vector<vector<int>> g, int index, int len)
{
	visited[index] = true;
	
	if (cnt < len)
		cnt = len;

	for(int i = 0; i < g[index].size(); i++)
		if (!visited[g[index][i]])
			DFS(g, g[index][i], len + 1);

	visited[index] = false;
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
		cnt = 1;
		int N, M; cin >> N >> M;
		vector<vector<int>> GRAPH(N + 1, vector<int>());

		int x, y;
		for (int i = 0; i < M; i++)
		{
			cin >> x >> y;
			GRAPH[x].push_back(y);
			GRAPH[y].push_back(x);
		}

		for (int i = 1; i <= N; i++)
			DFS(GRAPH, i, 1);

		cout << '#' << test_case << ' ' << cnt << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}