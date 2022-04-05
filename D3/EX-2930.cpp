#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<queue>
#include<functional>
#include<vector>

using namespace std;

struct compare {
	bool operator()(int& a, int& b)
	{
		return a < b;
	}
};

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
		priority_queue<int, vector<int>, compare> pq;
		int N; scanf("%d", &N);
		int op, temp;
		vector<int> out;

		for (int i = 0; i < N; i++)
		{
			scanf("%d", &op);
			if (op == 1)
			{
				scanf("%d", &temp);
				pq.push(temp);
			}
			else if (op == 2)
			{
				if (pq.empty())
					out.push_back(-1);
				else
				{
					out.push_back(pq.top());
					pq.pop();
				}
			}
		}
		printf("#%d ", test_case);
		for (int i = 0; i < out.size(); i++)
			printf("%d ", out[i]);
		printf("\n");
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}