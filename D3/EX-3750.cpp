#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int f(long long n)
{
	if (n < 10)
		return n;
	else
	{
		int sum = 0;
		for (long long i = n; i != 0; i /= 10)
			sum += i % 10;
		f(sum);
	}
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		long long n; scanf("%lld", &n);

		printf("#%d %d\n", test_case, f(n));
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}