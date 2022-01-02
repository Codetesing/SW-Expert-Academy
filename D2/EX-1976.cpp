#define _CRT_SECURE_NO_WARNINGS
#define HOUR 12
#define MINUTE 60

#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int H1, H2, M1, M2;
		int H, M;

		cin >> H1 >> M1 >> H2 >> M2;

		M = M1 + M2;
		H = M / MINUTE;
		M %= MINUTE;

		H += H1 + H2;
		H %= HOUR;

		if (H == 0)
			H = 12;

		printf("#%d %d %d\n", test_case, H, M);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}