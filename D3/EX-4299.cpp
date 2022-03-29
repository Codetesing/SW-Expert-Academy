
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int start = 11 * 60 + 11;
	cin >> T;
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int D, H, M; cin >> D >> H >> M;

		int out = (((D - 11) * 24 * 60) + (H * 60) + M) - start;

		if (out < 0)
			out = -1;

		printf("#%d %d\n", test_case, out);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}