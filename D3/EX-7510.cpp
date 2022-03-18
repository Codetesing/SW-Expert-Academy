
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
		int N; cin >> N;

		int result = 0;
		int num = 0;
		int temp = 1;
		for (int i = 1; i <= N; i++) {
			num += i;
			while (num > N) {
				num -= temp;
				temp++;
			}
			if (num == N) result++;
		}
		printf("#%d %d\n", test_case, result);

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}