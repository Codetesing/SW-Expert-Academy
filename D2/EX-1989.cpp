#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		string in, temp;
		int tok;

		cin >> in;
		temp = in;
		reverse(in.begin(), in.end());
		if (temp == in)
			tok = 1;
		else
			tok = 0;

		printf("#%d %d\n", test_case, tok);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}