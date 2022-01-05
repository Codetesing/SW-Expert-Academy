
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
		string S;
		int out;

		cin >> S;

		if (S == "SUN")
			out = 7;
		else if (S == "MON")
			out = 6;
		else if (S == "TUE")
			out = 5;
		else if (S == "WED")
			out = 4;
		else if (S == "THU")
			out = 3;
		else if (S == "FRI")
			out = 2;
		else if (S == "SAT")
			out = 1;

		printf("#%d %d\n", test_case, out);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}