
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
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N;

		cin >> N;

		vector<int> v(N);

		for (int i = 0; i < N; i++)
			cin >> v[i];

		int cnt = 0;
		for (int i = 1; i < N - 1; i++)
		{
			int min = *min_element(v.begin() + i - 1, v.begin() + i + 2);
			int max = *max_element(v.begin() + i - 1, v.begin() + i + 2);

			if ((v[i] != min) && (v[i] != max))
				cnt++;
		}

		printf("#%d %d\n", test_case, cnt);

	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}