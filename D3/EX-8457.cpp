
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
		int N, B, E; cin >> N >> B >> E;

		vector<int> X(N);
		for (int i = 0; i < N; i++) cin >> X[i];

		int cnt = 0;
		for (int i = 0; i < N; i++)
		{
			for(int j = B - E; j <= B + E; j++)
				if (j % X[i] == 0)
				{
					cnt++;
					break;
				}
		}

		printf("#%d %d\n", test_case, cnt);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}