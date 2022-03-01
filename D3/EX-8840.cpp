#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

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
		long long int L; scanf("%d", &L);

		long long int n = (L - 1) / 2;

		printf("#%d %lld\n", test_case, n * n);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}