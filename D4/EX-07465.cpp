#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

bool visited[101];

void DFS(vector<vector<int>> G, int index)
{
	visited[index] = true;
	for (int i = 0; i < G[index].size(); i++)
		if (!visited[G[index][i]])
			DFS(G, G[index][i]);
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
		memset(visited, false, sizeof(visited));
		int N, M; cin >> N >> M;
		vector<vector<int>> GRAPH(N + 1, vector<int>());
		int start, end, out = 0;
		for (int i = 0; i < M; i++)
		{
			cin >> start >> end;
			GRAPH[start].push_back(end);
			GRAPH[end].push_back(start);
		}

		for(int i = 1; i <= N; i++)
			if (!visited[i])
			{
				out++;
				DFS(GRAPH, i);
			}

		cout << '#' << test_case << ' ' << out << '\n';
	}
	return 0;
}