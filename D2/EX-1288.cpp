
#include<iostream>

using namespace std;

bool IS_ALL(bool* v)
{
	for (int i = 0; i < 10; i++)
		if (v[i] == false)
			return false;
	return true;
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
		int N, i;
		cin >> N;

		bool visit[10] = { false };

		for (i = N; ;i = i + N)
		{
			for (int j = i; j != 0; j /= 10)
				visit[j % 10] = true;

			if (IS_ALL(visit))
				break;
		}

		printf("#%d %d\n", test_case, i);
	
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}