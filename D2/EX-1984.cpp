#define SIZE 10

#include<iostream>
#include<algorithm>
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
		vector<int> v(SIZE);

		for (int i = 0; i < SIZE; i++)
			cin >> v[i];

		sort(v.begin(), v.end());
		int sum = 0;
		for (int i = 1; i < SIZE - 1; i++)
			sum += v[i];

		printf("#%d %.0f\n", test_case, round((double)sum / (SIZE - 2)));
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}