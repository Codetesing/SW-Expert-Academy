#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<queue>

using namespace std;

int ROTATE_X[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int ROTATE_Y[] = { -1, -1, -1, 0, 0, 1, 1, 1 };

bool visited[300][300];
int BOMB_NUM[300][300];

void BFS(int row, int col, int n)
{
	queue<pair<int, int>> q;

	q.push({ row, col });

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;

		q.pop();
		visited[x][y] = true;

		for (int i = 0; i < 8; i++)
		{
			int next_x = x + ROTATE_X[i];
			int next_y = y + ROTATE_Y[i];

			if ((next_x >= 0) && (next_x < n) && (next_y >= 0) && (next_y < n))
			{
				if (!visited[next_x][next_y])
				{
					visited[next_x][next_y] = true;

					if (BOMB_NUM[next_x][next_y] == 0)
						q.push({ next_x, next_y });
				}
			}
		}
	}
}

void FIND_BOMB_NUM(vector<string>map, int n)
{
	for(int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (map[i][j] == '*')
			{
				BOMB_NUM[i][j] = -1;
				visited[i][j] = true;
			}

			else
			{
				int cnt = 0;
				for (int k = 0; k < 8; k++)
				{
					int next_x = i + ROTATE_X[k];
					int next_y = j + ROTATE_Y[k];

					if ((next_x >= 0) && (next_x < n) && (next_y >= 0) && (next_y < n))
						if (map[next_x][next_y] == '*')
							cnt++;
				}

				BOMB_NUM[i][j] = cnt;
			}
		}
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
		int N; cin >> N;
		vector<string> map(N);
		for (int i = 0; i < N; i++)
			cin >> map[i];
		memset(visited, false, sizeof(visited));

		FIND_BOMB_NUM(map, N);

		int out = 0;

		for(int i = 0; i < N; i++)
			for(int j = 0; j < N; j++)
				if (!visited[i][j] && BOMB_NUM[i][j] == 0)
				{
					out++;
					BFS(i, j, N);
				}

		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				if (!visited[i][j] && BOMB_NUM[i][j] > 0)
					out++;
		
		cout << '#' << test_case << ' ' << out << '\n';
	}
	return 0;
}