
#include<iostream>
#include<algorithm>

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
		int N, M; cin >> N >> M;

		int n = min(N, M);
		int m = max(N, M);

		printf("#%d ", test_case);
		for (int i = n + 1; i <= m + 1; i++)
			printf("%d ", i);
		printf("\n");

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}