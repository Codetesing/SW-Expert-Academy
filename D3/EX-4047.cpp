
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int card_num(char a, char b)
{
	return ((a - '0') * 10) + (b - '0');
}

int card_shape(char a)
{
	if (a == 'S') return 1;
	if (a == 'D') return 2;
	if (a == 'H') return 3;
	if (a == 'C') return 4;
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
		string card; cin >> card;

		vector<int> out(5, 0);
		char visited[5][14] = { false };
		bool flag = true;
		int len = card.length();
		for (int i = 0; i < len; i += 3)
		{
			int col = card_num(card[i + 1], card[i + 2]);
			int row = card_shape(card[i]);
			out[row]++;

			if (!visited[row][col])
				visited[row][col] = true;
			else
			{
				flag = false;
				break;
			}
		}

		printf("#%d ", test_case);
		if (flag)
		{
			for (int i = 1; i <= 4; i++)
				printf("%d ", 13 - out[i]);
			printf("\n");
		}
		else
			printf("ERROR\n");
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}