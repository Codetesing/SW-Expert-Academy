#define LEN 9

#include<iostream>
#include<string>

using namespace std;

int color_check(string in, char color)
{
	int cnt = 0;

	for (int i = 0; i < LEN; i++)
		if (in[i] == color)
			cnt++;

	return cnt % 3;
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
		string num; cin >> num;
		string color; cin >> color;
		int visited_num[LEN + 1] = { 0 };

		for (int i = 0; i < LEN; i++)
			visited_num[num[i] - '0']++;

		bool flag = false;
		int cnt_num = 0;
		for (int i = 1; i < LEN - 1; i++)
		{
			if ((visited_num[i] % 3 == 0) && (visited_num[i] != 0))
			{
				cnt_num += visited_num[i] / 3;
				visited_num[i] %= 3;
			}

			for (int j = 0; j < 3; j++)
				if (visited_num[i] && visited_num[i + 1] && visited_num[i + 2])
				{
					visited_num[i]--;
					visited_num[i + 1]--;
					visited_num[i + 2]--;
					cnt_num++;
				}
		}

		for (int i = 1; i <= LEN; i++)
			if ((visited_num[i] % 3 == 0) && (visited_num[i] != 0))
				cnt_num++;

		if (cnt_num == 3)
		{
			flag = true;

			if (color_check(color, 'R') || color_check(color, 'G') || color_check(color, 'B'))
				flag = false;
		}

		printf("#%d ", test_case);
		if (flag)
			printf("Win\n");
		else
			printf("Continue\n");
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}