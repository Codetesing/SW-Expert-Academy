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
		int N, M; cin >> N >> M;

		vector<int> score(N);

		int temp;
		for (int i = 0; i < N; i++)
		{
			int cnt = 0;
			for (int j = 0; j < M; j++)
			{
				scanf("%d", &temp);
				if (temp == 1)
					cnt++;
			}
			score[i] = cnt;
		}
		
		int max = *max_element(score.begin(), score.end());
		int grade = 0;

		for (int i = 0; i < N; i++)
			if (score[i] == max)
				grade++;

		printf("#%d %d %d\n", test_case, grade, max);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}