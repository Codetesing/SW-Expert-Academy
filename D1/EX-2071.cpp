#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cmath>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, N = 10, sum, tmp;
	float out = 0;
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		sum = 0;

		for (int i = 0; i < N; i++)
		{
			scanf("%d", &tmp);
			sum += tmp;
		}

		out = sum / (float)N;

		printf("#%d %.0f\n", test_case, round(out));
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}