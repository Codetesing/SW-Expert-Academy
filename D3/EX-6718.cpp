#define _CRT_SECURE_NO_WARNINGS

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
		int m; scanf("%d", &m);
		int out = 0;
		float d = (float)m / 1000;
		
		if (d >= 1000)
			out = 5;
		else if (d >= 100)
			out = 4;
		else if (d >= 10)
			out = 3;
		else if (d >= 1)
			out = 2;
		else if (d >= 0.1)
			out = 1;

		printf("#%d %d\n", test_case, out);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}