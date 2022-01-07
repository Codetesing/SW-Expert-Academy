
#include<iostream>
#include<vector>
#include<cmath>

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

		vector<int> v(N);
		for (int i = 0; i < N; i++)
			cin >> v[i];

		int sum = 0;
		for (int i = 0; i < N; i++)
			sum += v[i];

		float eval = sum / (float)N;

		int cnt = 0;
		for (int i = 0; i < N; i++)
			if (eval >= v[i])
				cnt++;

		printf("#%d %d\n", test_case, cnt);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}