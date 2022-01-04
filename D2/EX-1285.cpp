
#include<iostream>
#include<vector>
#include<cmath>
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
		int N, temp;
		int cnt = 0;
		cin >> N;

		vector<int> v(N);

		for (int i = 0; i < N; i++)
		{
			cin >> temp;
			if (temp < 0)
				temp = abs(temp);
			v[i] = temp;
		}

		int min = *min_element(v.begin(), v.end());

		for (int i = 0; i < N; i++)
			if (min == v[i])
				cnt++;

		printf("#%d %d %d\n", test_case, min, cnt);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}