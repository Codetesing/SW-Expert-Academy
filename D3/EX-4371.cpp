
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
		int N; cin >> N;
		bool visited[5001] = { false };
		vector<int> date(N);

		for (int i = 0; i < N; i++)
			cin >> date[i];

		int cnt = 0;
		for (int i = 1; i < N; i++)
		{
			if (!visited[i])
			{
				int mod = date[i] - 1;
				cnt++;
				for (int j = i; j < N; j++)
					if (((date[j] - 1) % mod) == 0)
						visited[j] = true;
			}
		}

		printf("#%d %d\n", test_case, cnt);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}