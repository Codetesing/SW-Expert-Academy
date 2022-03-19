
#include<iostream>
#include<vector>
#include<string>

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
		bool visited[26] = { false };

		vector<string> in(N);
		for (int i = 0; i < N; i++)
			cin >> in[i];

		for (int i = 0; i < N; i++)
			visited[in[i][0] - 'A'] = true;

		int out = 0;
		for (int i = 0; i < 26; i++, out++)
			if (!visited[i])
				break;

		printf("#%d %d\n", test_case, out);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}