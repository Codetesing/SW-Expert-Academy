#define _CRT_SECURE_NO_WARNINGS

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
		int N, x, y, d, d2;
		scanf("%d", &N);

		int sum = 0;
		for (int i = 0; i < N; i++) {
			scanf("%d %d", &x, &y);
			d2 = x * x + y * y;

			for (d = 20; d <= 200; d += 20)
				if (d * d >= d2)
					break;
			sum += 11 - d / 20;
		}
		printf("#%d %d\n", test_case, sum);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}