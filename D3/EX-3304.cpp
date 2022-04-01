
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
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
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
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}