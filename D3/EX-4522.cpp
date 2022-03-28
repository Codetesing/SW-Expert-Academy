
#include<iostream>
#include<string>
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
		string in; cin >> in;
		string rev_in = in;
		reverse(rev_in.begin(), rev_in.end());
		int len = in.length();
		bool flag = true;

		for (int i = 0; i < len; i++)
			if (in[i] != rev_in[i])
				if (in[i] != '?' && rev_in[i] != '?')
				{
					flag = false;
					break;
				}

		printf("#%d ", test_case);
		if (flag)
			printf("Exist\n");
		else
			printf("Not exist\n");
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}