
#include<iostream>
#include<cstring>

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
		string in;
		int a = 1, b = 1;

		cin >> in;

		int len = in.length();

		for (int i = 0; i < len; i++)
		{
			if (in[i] == 'L')
				b = a + b;
			else if (in[i] == 'R')
				a = a + b;
		}

		printf("#%d %d %d\n", test_case, a, b);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}