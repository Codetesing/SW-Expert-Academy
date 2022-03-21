
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
		int N; cin >> N;
		vector<int> stairs(N);
		vector<int> diff;

		for (int i = 0; i < N; i++)
			cin >> stairs[i];

		for (int i = 0; i < N - 1; i++)
			diff.push_back(stairs[i] - stairs[i + 1]);

		int min = *min_element(diff.begin(), diff.end());
		if (min > 0)
			min = 0;
		int max = *max_element(diff.begin(), diff.end());
		if (max < 0)
			max = 0;

		printf("#%d %d %d\n", test_case, min * -1, max);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}