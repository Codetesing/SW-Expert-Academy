
#include<iostream>
#include<cstring>

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
		string in; cin >> in;

		int len = in.length();
		bool visited[10] = { false };

		for (int i = 0; i < len; i++)
		{
			if (!(visited[in[i] - '0']))
				visited[in[i] - '0'] = true;
			else
				visited[in[i] - '0'] = false;
		}

		int cnt = 0;
		for (int i = 0; i < 10; i++)
			if (visited[i])
				cnt++;

		printf("#%d %d\n", test_case, cnt);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}