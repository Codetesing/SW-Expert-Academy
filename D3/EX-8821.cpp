
#include<iostream>
#include<cstring>

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
		string in; cin >> in;

		int len = in.length();
		bool visited[10] = { false };

		for (int i = 0; i < len; i++)
		{
			if (!(visited[in[i] - '0']))
				visited[in[i] - '0'] = true;
			else
				visited[in[i] - '0'] = false;
		}

		int cnt = 0;
		for (int i = 0; i < 10; i++)
			if (visited[i])
				cnt++;

		printf("#%d %d\n", test_case, cnt);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}