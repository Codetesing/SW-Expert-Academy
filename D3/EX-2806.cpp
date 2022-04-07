
#include<iostream>

using namespace std;

int cnt = 0;
bool CHESS_MAP[10][10] = { false };

bool RIGHT_POS(int row, int col, int n)
{
	for (int i = 0; i < col; i++)
		if (CHESS_MAP[row][i])
			return false;

	int next_row = row - 1; 
	int next_col = col - 1;
	while (next_row >= 0 && next_col >= 0)
		if (CHESS_MAP[next_row--][next_col--])
			return false;

	next_row = row + 1;
	next_col = col - 1;
	while (next_row < n && next_col >= 0)
		if (CHESS_MAP[next_row++][next_col--])
			return false;

	return true;
}

void N_QUEEN(int row, int col, int n)
{
	if (col == n)
	{
		cnt++;
		return;
	}

	for(int i = 0; i < n; i++)
		if (RIGHT_POS(i, col, n))
		{
			CHESS_MAP[i][col] = true;
			N_QUEEN(i, col + 1, n);
			CHESS_MAP[i][col] = false;
		}
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N; cin >> N;
		cnt = 0;

		N_QUEEN(0, 0, N);

		cout << '#' << test_case << ' ' << cnt << endl;
	}
	return 0;
}
