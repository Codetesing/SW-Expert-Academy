
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
		int N; cin >> N;

		string in[2];

		for (int i = 0; i < 2; i++)
		{
			cin >> in[i];
		}

		int cnt = 0;
		for (int i = 0; i < N; i++)
			if (in[0][i] == in[1][i])
				cnt++;

		cout << "#" << test_case << ' '<< cnt << endl;
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}