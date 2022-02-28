
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(int i, int j)
{
	return i > j;
}

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

		vector<int> W(N);
		int max = -1;
		for (int i = 0; i < N; i++)
			cin >> W[i];

		//sort(W.begin(), W.end(), compare);

		for (int i = 0; i < N - 1; i++)
			for (int j = i + 1; j < N; j++)
				if ((max < W[i] + W[j]) && (W[i] + W[j] <= M))
					max = W[i] + W[j];

		printf("#%d %d\n", test_case, max);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}