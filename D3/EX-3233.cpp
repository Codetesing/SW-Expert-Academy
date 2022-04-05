#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int A, B; scanf("%d %d", &A, &B);

		long long int out = (A / B);

		out *= out;

		printf("#%d %lld\n", test_case, out);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}