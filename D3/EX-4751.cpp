
#include<iostream>
#include<vector>
#include<string>
#include<cmath>

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
		int len = 4 * in.length() + 1;
		vector<vector<char>> map(5, vector<char>(len, '.'));
		
		for (int i = 0; i < 5; i++)
		{
			int temp = abs(2 - i);

			for (int j = temp; j < len; j = j + temp + 1)
			{
				map[i][j] = '#';
				if (temp == 0 || temp == 2)
					temp = 3;
			}
		}

		for (int i = 0, j = 2; i < in.length(); i++, j += 4)
			map[2][j] = in[i];

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < len; j++)
				printf("%c", map[i][j]);
			printf("\n");
		}
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}