
#include<iostream>
#include<vector>
#include<string>

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
		vector<string> DECK(N);

		for (int i = 0; i < N; i++) cin >> DECK[i];

		printf("#%d ", test_case);

		if (N % 2 == 1)
		{
			for (int i = 0; i < N / 2; i++)
				cout << DECK[i] << ' ' << DECK[i + N / 2 + 1] << ' ';
			cout << DECK[N / 2];
		}
		else
		{
			for (int i = 0; i < N / 2; i++)
				cout << DECK[i] << ' ' << DECK[i + N / 2] << ' ';
		}
		cout << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}