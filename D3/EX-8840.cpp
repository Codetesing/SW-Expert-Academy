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
		long long int L; scanf("%d", &L);

		long long int n = (L - 1) / 2;

		printf("#%d %lld\n", test_case, n * n);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}