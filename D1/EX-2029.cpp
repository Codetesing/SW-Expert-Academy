#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, a, b;

	cin >> T;
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> a >> b;
		
		printf("#%d %d %d\n", test_case, a / b, a % b);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}