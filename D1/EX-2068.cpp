#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, N = 10;
	int tmp;

	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int max = -1;
		for (int i = 0; i < N; i++)
		{
			scanf("%d", &tmp);
			if (max < tmp)
				max = tmp;
		}
		
		printf("#%d %d\n", test_case, max);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}