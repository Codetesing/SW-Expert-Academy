
#include<iostream>

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
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}