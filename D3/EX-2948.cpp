
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int test_case;
	int T;

	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, M; cin >> N >> M;
		vector<string> A(N);
		vector<string> B(M);

		for (int i = 0; i < N; i++) cin >> A[i];
		for (int i = 0; i < M; i++) cin >> B[i];

		sort(A.begin(), A.end());
		sort(B.begin(), B.end());

		int cnt = 0;

		vector<string>::iterator it_A = A.begin();
		vector<string>::iterator it_B = B.begin();

		while ((it_A != A.end()) && (it_B != B.end()))
		{
			if (*it_A == *it_B)
			{
				cnt++;
				it_A++;
				it_B++;
			}
			else if (*it_A < *it_B)
				it_A++;
			else
				it_B++;
		}

		printf("#%d %d\n", test_case, cnt);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}