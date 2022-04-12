
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, M; cin >> N >> M;
		vector<int> A(N);
		vector<int> B(M);
		vector<int> voted(N, 0);
		for (int i = 0; i < N; i++) cin >> A[i];
		for (int i = 0; i < M; i++) cin >> B[i];

		for (int i = 0; i < M; i++)
		{
			int max_A = 0;
			int index = 0;

			for (int j = 0; j < N; j++)
				if (A[j] <= B[i])
				{
					index = j;
					break;
				}

			voted[index]++;
		}

		int out = max_element(voted.begin(), voted.end()) - voted.begin();

		cout << '#' << test_case << ' ' << out + 1<< '\n';
	}
	return 0;
}