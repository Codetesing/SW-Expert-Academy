
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
		long long int N; cin >> N;

		long long int left = (N - 1) * (N - 1) * 2 + 1;
		long long int right = N * N * 2 - 1;

		printf("#%d %lld %lld\n", test_case, left, right);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}