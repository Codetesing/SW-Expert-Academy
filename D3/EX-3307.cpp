#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
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
		int N; cin >> N;
		vector<int> DP(N + 1, 0);
		vector<int> A(N + 1);
		
		for (int i = 1; i <= N; i++)
		{
			scanf("%d", &A[i]);
			DP[i] = 1;
		}
		
		for (int i = 2; i <= N; i++)
			for (int j = 1; j < i; j++)
				if (A[i] >= A[j])
					DP[i] = max(DP[j] + 1, DP[i]);

		int out = *max_element(DP.begin(), DP.end());

		cout << '#' << test_case << ' ' << out << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}