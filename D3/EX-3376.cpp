
#include<iostream>
#include<vector>

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
		vector<long long int> DP(N + 3, 0);

		for (int i = 1; i <= 3; i++)
			DP[i] = 1;

		for (int i = 4; i <= N; i++)
			DP[i] = DP[i - 2] + DP[i - 3];

		cout << '#' << test_case << ' ' << DP[N] << '\n';
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}