
#include<iostream>

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
		int X; cin >> X;
		bool visited[10] = { false };

		for (; X > 0; X /= 10)
			visited[X % 10] = true;

		int ans = 0;
		for (int i = 0; i < 10; i++)
			if (visited[i])
				ans++;

		printf("#%d %d\n", test_case, ans);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}