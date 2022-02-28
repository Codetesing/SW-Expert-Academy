
#include<iostream>
#include<stack>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
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
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}