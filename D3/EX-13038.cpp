#define SIZE 7

#include<iostream>
#include<vector>

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
		int N, cnt = 8, i;
		vector<int> v(SIZE);

		cin >> N;

		for (int i = 0; i < SIZE; i++)
			cin >> v[i];

		int min_day = N * SIZE;

		for (int i = 0; i < SIZE; i++)
		{
			if (v[i] == 0)
				continue;

			int out = 0, cnt = 0, j = i;

			while (cnt != N)
			{
				if (v[j % SIZE] == 1)
					cnt++;
				out++;
				j++;
			}
			if (min_day > out)
				min_day = out;
		}
		printf("#%d %d\n", test_case, min_day);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}