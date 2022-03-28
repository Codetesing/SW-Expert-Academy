
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(int i, int j)
{
	return i > j;
}

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
		int N, K; cin >> N >> K;
		vector<int> score(N);

		for (int i = 0; i < N; i++)
			cin >> score[i];

		sort(score.begin(), score.end(), compare);

		int sum = 0;
		for (int i = 0; i < K; i++)
			sum += score[i];

		printf("#%d %d\n", test_case, sum);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}