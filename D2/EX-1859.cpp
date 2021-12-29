#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, N;
	
	cin >> T;
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		scanf("%d", &N);
		vector<int> v(N);
		long long plus = 0;

		for (int i = 0; i < N; i++)
			scanf("%d", &v[i]);

		long long anc = v[N - 1];

		for (int i = N - 1; i >= 0; i--) {
			if (v[i] < anc) 
				plus += (anc - v[i]);
			else if (v[i] > anc) 
				anc = v[i];
		}

		printf("#%d %lld\n", test_case, plus);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}