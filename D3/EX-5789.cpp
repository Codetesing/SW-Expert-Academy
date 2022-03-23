#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>

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
		int N, Q; scanf("%d %d", &N, &Q);
		vector<int> box(N + 1, 0);

		int L, R;
		for (int i = 1; i <= Q; i++)
		{
			scanf("%d %d", &L, &R);
			for (int j = L; j <= R; j++)
				box[j] = i;
		}

		printf("#%d ", test_case);
		for (int i = 1; i <= N; i++)
			printf("%d ", box[i]);
		printf("\n");
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}