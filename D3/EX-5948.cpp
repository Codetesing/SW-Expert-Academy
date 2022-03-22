#define LEN 7

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
		vector<int> V(LEN);
		vector<int> SUM;

		for (int i = 0; i < LEN; i++)
			cin >> V[i];

		for (int i = 0; i < LEN - 2; i++)
			for (int j = i + 1; j < LEN - 1; j++)
				for (int k = j + 1; k < LEN; k++)
						SUM.push_back(V[i] + V[j] + V[k]);

		sort(SUM.begin(), SUM.end(), compare);
		SUM.erase(unique(SUM.begin(), SUM.end()), SUM.end());
		printf("#%d %d\n", test_case, SUM[4]);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}