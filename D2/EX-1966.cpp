#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
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
		int N;

		cin >> N;

		vector<int> v(N);

		for (int i = 0; i < N; i++)
			scanf("%d", &v[i]);

		sort(v.begin(), v.end());

		printf("#%d ", test_case);
		for (int i = 0; i < N; i++)
			printf("%d ", v[i]);
		printf("\n");
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}