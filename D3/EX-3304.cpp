
#include<iostream>
#include<string>
#include<vector>
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
		string a, b; cin >> a >> b;
		int len_a = a.length();
		int len_b = b.length();
		vector<vector<int>> DP(len_a + 1, vector<int>(len_b + 1, 0));

		for (int i = 1; i <= len_a; i++)
		{
			for (int j = 1; j <= len_b; j++)
			{
				if (a[i - 1] == b[j - 1])
					DP[i][j] = DP[i - 1][j - 1] + 1;
				else
					DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
			}
		}
		printf("#%d %d\n", test_case, DP[len_a ][len_b]);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}