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
		int A, B, C, D; scanf("%d %d %d %d", &A, &B, &C, &D);

		float alice = (float)A / B;
		float bob = (float)C / D;

		printf("#%d ", test_case);
		if (alice > bob)
			printf("ALICE\n");
		else if (alice == bob)
			printf("DRAW\n");
		else
			printf("BOB\n");
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}