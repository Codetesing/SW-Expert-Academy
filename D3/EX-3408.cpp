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
		long long int N; scanf("%lld", &N);

		long long int S1 = 0, S2 = 0, S3 = 0;

		if (N % 2 == 1)
			S1 = ((1 + N) * (N / 2)) + (N + 1) / 2;
//			S1 = (((1 + N) / 2) * N) + (N + 1) / 2;
		else
			S1 = (((1 + N) * (N / 2)));
		
		S2 = ((1 + 2 * N) / 2) * N;
		S3 = ((2 + 2 * N) / 2) * N;

		printf("#%d %lld %lld %lld\n", test_case, S1, S2, S3);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}