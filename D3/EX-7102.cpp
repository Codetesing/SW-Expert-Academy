
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
		int N, M; cin >> N >> M;

		int n = min(N, M);
		int m = max(N, M);

		printf("#%d ", test_case);
		for (int i = n + 1; i <= m + 1; i++)
			printf("%d ", i);
		printf("\n");

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}