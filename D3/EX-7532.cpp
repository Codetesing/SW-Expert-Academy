
#include<iostream>
#include<cmath>

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
		int S, E, M; cin >> S >> E >> M;

		S--; E--; M--;

		printf("#%d ", test_case);
		for (long long int i = E; ; i += 24)
		{
			if (((i % 365) == S) && ((i % 29) == M))
			{
				printf("%lld\n", i + 1);
				break;
			}
		}

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}