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
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
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
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}