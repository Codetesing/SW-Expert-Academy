
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
		int P, Q, R, S, W;

		cin >> P >> Q >> R >> S >> W;

		int a = P * W;
		int b = Q;

		if (R < W)
			b += (W - R) * S;

		int out = a > b ? b : a;

		printf("#%d %d\n", test_case, out);

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}