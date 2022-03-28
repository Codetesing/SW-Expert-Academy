
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
		int N, K; cin >> N >> K;
		vector<int> score(N);

		for (int i = 0; i < N; i++)
			cin >> score[i];

		sort(score.begin(), score.end(), compare);

		int sum = 0;
		for (int i = 0; i < K; i++)
			sum += score[i];

		printf("#%d %d\n", test_case, sum);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}