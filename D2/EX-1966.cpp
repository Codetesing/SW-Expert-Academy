#define _CRT_SECURE_NO_WARNINGS

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
			scanf("%d", &v[i]);

		sort(v.begin(), v.end());

		printf("#%d ", test_case);
		for (int i = 0; i < N; i++)
			printf("%d ", v[i]);
		printf("\n");
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}