
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

		vector<vector<int>> v(N, vector<int>(2));

		for (int i = 0; i < N; i++)
			cin >> v[i][0] >> v[i][1];

		int cnt = 0;
		for (int i = 0; i < N - 1; i++)
			for (int j = i + 1; j < N; j++)
				if (((v[i][0] - v[j][0]) * (v[i][1] - v[j][1])) < 0)
					cnt++;

		printf("#%d %d\n", test_case, cnt);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}