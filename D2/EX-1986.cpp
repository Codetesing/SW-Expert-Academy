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
		int N, res;
		cin >> N;

		if (N % 2 == 0)
			res = (-1) * (N / 2);
		else
			res = (-1) * (N / 2) + N;

		printf("#%d %d\n", test_case, res);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}