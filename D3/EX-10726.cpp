
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
		int N, M; cin >> N >> M;

		int mod = 2, tok = 1;
		for (int i = 0; i < N; i++)
		{
			if (M % mod == 0)
			{
				tok = 0;
				break;
			}
			M /= mod;
		}

		if (tok == 0)
			printf("#%d OFF\n", test_case);
		else
			printf("#%d ON\n", test_case);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}