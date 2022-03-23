#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, K; cin >> N >> K;
		bool *visited = new bool[N + 1];
		int temp;
		
		for (int i = 0; i <= N; i++)
			visited[i] = false;

		for (int i = 0; i < K; i++)
		{
			cin >> temp;
			visited[temp] = true;
		}

		printf("#%d ", test_case);
		for (int i = 1; i <= N; i++)
			if (!visited[i])
				printf("%d ", i);
		printf("\n");
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}