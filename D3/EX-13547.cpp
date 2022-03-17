
#include<iostream>
#include<string>

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
		string in; cin >> in;

		int len = in.length();
		int loss = 0;

		for (int i = 0; i < len; i++)
			if (in[i] == 'x')
				loss++;

		printf("#%d ", test_case);
		if (loss < 8)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}