
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
		int D, L, N;

		cin >> D >> L >> N;

		int sum = 0;

		for (int i = 0; i < N; i++)
			sum += D + i * L * (D / 100);

		printf("#%d %d\n", test_case, sum);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}