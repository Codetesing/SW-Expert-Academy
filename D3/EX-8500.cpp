
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(int a, int b)
{
	return a > b;
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
		int N; cin >> N;

		vector<int> in(N);
		for (int i = 0; i < N; i++) cin >> in[i];

		sort(in.begin(), in.end(), compare);

		int sum = in[0] + in[N - 1] + N;
		for (int i = 0; i < N - 1; i++)
			sum += in[i];

		printf("#%d %d\n", test_case, sum);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}