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
		int A, B, C; scanf("%d %d %d", &A, &B, &C);
		int out;

		if (A > B)
			out = C / B;
		else
			out = C / A;

		printf("#%d %d\n", test_case, out);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}