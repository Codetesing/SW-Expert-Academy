
#include<iostream>
#include<string>

using namespace std;

int ctoi(char a)
{
	return a - '0';
}

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
		string cur; cin >> cur;
		string app; cin >> app;

		int cur_sec = ((ctoi(cur[0]) * 10 + ctoi(cur[1])) * 3600) + ((ctoi(cur[3]) * 10 + ctoi(cur[4])) * 60) + (ctoi(cur[6]) * 10 + ctoi(cur[7]));
		int app_sec = ((ctoi(app[0]) * 10 + ctoi(app[1])) * 3600) + ((ctoi(app[3]) * 10 + ctoi(app[4])) * 60) + (ctoi(app[6]) * 10 + ctoi(app[7]));

		int out_sec = app_sec - cur_sec;

		if (out_sec < 0)
			out_sec += 24 * 3600;

		int h = out_sec / 3600;
		out_sec %= 3600;
		int m = out_sec / 60;
		out_sec %= 60;
		int s = out_sec;

		printf("#%d ", test_case);
		
		if (h < 10)
			printf("0");
		printf("%d:", h);

		if (m < 10)
			printf("0");
		printf("%d:", m);

		if (s < 10)
			printf("0");
		printf("%d\n", s);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}