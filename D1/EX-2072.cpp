#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, sum, N = 10, tmp;
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		sum = 0;
		
		for (int i = 0; i < N; i++)
		{
			scanf("%d", &tmp);
			
			if (tmp % 2 == 1)
				sum += tmp;
		}

		printf("#%d %d\n", test_case, sum);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}