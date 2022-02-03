
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
		float p, q;
		cin >> p >> q;

		float s1 = (1 - p) * q;
		float s2 = p * (1 - q) * q;

		printf("#%d ", test_case);

		if (s1 < s2)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}