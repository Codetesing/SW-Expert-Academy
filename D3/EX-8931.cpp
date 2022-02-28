
#include<iostream>
#include<stack>

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

		int sum = 0, num;
		stack<int> s;

		for (int i = 0; i < N; i++)
		{
			cin >> num;
			if (num == 0)
				s.pop();
			else
				s.push(num);
		}

		while(!s.empty())
		{
			sum += s.top();
			s.pop();
		}
		printf("#%d %d\n", test_case, sum);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}