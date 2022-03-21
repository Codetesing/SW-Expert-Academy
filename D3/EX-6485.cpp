
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
		int N; cin >> N;
		vector<int> A(N);
		vector<int> B(N);

		for (int i = 0; i < N; i++)
			cin >> A[i] >> B[i];

		int P; cin >> P;
		vector<int> out;
		int C;

		for (int i = 0; i < P; i++)
		{
			int cnt = 0;
			cin >> C;
			for (int j = 0; j < N; j++)
				if ((C >= A[j]) && (C <= B[j]))
					cnt++;
			out.push_back(cnt);
		}
		printf("#%d", test_case);
		for (int i = 0; i < P; i++)
			printf(" %d", out[i]);
		printf("\n");
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}