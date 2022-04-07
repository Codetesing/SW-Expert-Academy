
#include<iostream>
#include<string>
#include<vector>
#include<queue>

using namespace std;

typedef struct pos {
	int x;
	int y;
	int len;
}pos;

int ROTATE_X[] = { -1, 0, 1, 0 };
int ROTATE_Y[] = { 0, -1, 0, 1 };

bool RANGE(int x, int y, int n)
{
	if (x < 0 || x >= n)
		return false;
	if (y < 0 || y >= n)
		return false;

	return true;
}

int BFS(vector<vector<int>>f, int n)
{
	queue<pos> q;
	int x = n / 2, y = n / 2;
	int sum = 0;
	pos temp;
	temp.x = x; temp.y = y; temp.len = 0; q.push(temp);
	bool visited[50][50] = { false };
	visited[x][y] = true;
	
	while (!q.empty())
	{
		pos cur = q.front();
		q.pop();

		if (cur.len > n / 2)
			break;

		sum += f[cur.x][cur.y];

		for (int i = 0; i < 4; i++)
		{
			int next_x = cur.x + ROTATE_X[i];
			int next_y = cur.y + ROTATE_Y[i];

			if (!visited[next_x][next_y] && RANGE(next_x, next_y, n))
			{
				temp.x = next_x;
				temp.y = next_y;
				temp.len = cur.len + 1;
				q.push(temp);
				visited[next_x][next_y] = true;
			}
		}
	}

	return sum;
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
		int N; cin >> N;
		vector<vector<int>> FARM(N, vector<int>(N));
		string temp;

		for (int i = 0; i < N; i++)
		{
			cin >> temp;
			for (int j = 0; j < N; j++)
				FARM[i][j] = temp[j] - '0';
		}

		int value = BFS(FARM, N);

		cout << '#' << test_case << ' ' << value << '\n';
	}
	return 0;
}