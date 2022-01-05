#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>

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
		int A, B, C, D;

		scanf("%d %d %d %d", &A, &B, &C, &D);

		int start = max(A, C);
		int end = min(B, D);

		int out = end - start;

		if (out < 0)
			out = 0;

		printf("#%d %d\n", test_case, out);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}