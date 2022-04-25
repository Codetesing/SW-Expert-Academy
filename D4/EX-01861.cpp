#include<iostream>
#include<vector>

using namespace std;

int ROTATE_X[] = { -1, 1, 0, 0 };
int ROTATE_Y[] = { 0, 0, -1, 1 };

int out_val = 0;
int out_len = 0;
int N;
bool visited[1001][1001] = { false };
int map[1001][1001] = { false };


void DFS(int depth, int row, int col)
{
	visited[row][col] = true;
	for (int i = 0; i < 4; i++)
	{
		int next_row = row + ROTATE_X[i];
		int next_col = col + ROTATE_Y[i];

		if ((next_row >= 0) && (next_row < N) && (next_col >= 0) && (next_col < N))
			if (!visited[next_row][next_col] && (map[next_row][next_col] == map[row][col] - 1))
				DFS(depth + 1, next_row, next_col);
	}

	if (out_len < depth)
	{
		out_val = map[row][col];
		out_len = depth;
	}
	else if (out_len == depth)
		if (out_val > map[row][col])
			out_val = map[row][col];

	visited[row][col] = false;
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
		out_len = 0;
		out_val = 0;
		cin >> N;
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				cin >> map[i][j];

		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				DFS(1, i, j);

		cout << '#' << test_case << ' ' << out_val << ' ' << out_len << '\n';
	}
	return 0;
}