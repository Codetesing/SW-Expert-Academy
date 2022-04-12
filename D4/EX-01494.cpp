#define MAX 987987654321
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int N;
bool visited[21];
long long out;
int x[21];
int y[21];

void sum_vector()
{
	vector<int> selected;
	vector<int> not_selected;

	for (int i = 0; i < N; i++)
	{
		if (visited[i])
			selected.push_back(i);
		else
			not_selected.push_back(i);
	}

	long long sum_x = 0, sum_y = 0;
	for (int i = 0; i < N / 2; i++)
	{
		sum_x = sum_x + x[selected[i]] - x[not_selected[i]];
		sum_y = sum_y + y[selected[i]] - y[not_selected[i]];
	}

	if(out > sum_x * sum_x + sum_y * sum_y)
		out = sum_x * sum_x + sum_y * sum_y;
}

void DFS(int cur, int cnt)
{
	visited[cur] = true;
	cnt++;

	if (cnt == N / 2)
		sum_vector();

	else
		for (int i = cur + 1; i < N; i++)
			if (!visited[i])
				DFS(i, cnt);

	visited[cur] = false;
	cnt--;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		out = MAX;
		memset(visited, false, sizeof(visited));
		scanf("%d", &N);

		for (int i = 0; i < N; i++) scanf("%d %d", &x[i], &y[i]);

		DFS(0, 0);

		printf("#%d %lld\n", test_case, out);
	}
	return 0;
}