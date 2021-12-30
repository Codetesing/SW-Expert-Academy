#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N;
		cin >> N;

		vector<vector<int>> v(N);
		
		for (int i = 0; i < N; i++)
		{
			vector<int> temp(i + 1);
			if (i == 0)
				temp[i] = 1;
			else
			{
				temp[0] = 1;
				temp[i] = 1;
				for (int j = 1; j < i; j++)
					temp[j] = v[i - 1][j - 1] + v[i - 1][j];
			}
			v[i] = temp;
		}

		printf("#%d\n", test_case);
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j <= i; j++)
				printf("%d ", v[i][j]);
			printf("\n");
		}
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}