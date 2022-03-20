
#include<iostream>
#include<vector>
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
		int N, M; cin >> N >> M;

		int sum = 0;
		vector<string> corr(N);
		vector<int> price(N);
		vector<string> match(M);

		for (int i = 0; i < N; i++)
			cin >> corr[i] >> price[i];
		for (int i = 0; i < M; i++)
			cin >> match[i];

		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				bool flag = true;
				for (int k = 0; k < 8; k++)
					if ((corr[j][k] != '*') && (corr[j][k] != match[i][k]))
					{
						flag = false;
						break;
					}
				if (flag)
					sum += price[j];
			}
		}

		printf("#%d %d\n", test_case, sum);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}