
#include<iostream>

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
		int N, M; cin >> N >> M;

		int mod = 2, tok = 1;
		for (int i = 0; i < N; i++)
		{
			if (M % mod == 0)
			{
				tok = 0;
				break;
			}
			M /= mod;
		}

		if (tok == 0)
			printf("#%d OFF\n", test_case);
		else
			printf("#%d ON\n", test_case);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}