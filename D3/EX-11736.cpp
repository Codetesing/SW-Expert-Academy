
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
			cin >> v[i];

		int cnt = 0;
		for (int i = 1; i < N - 1; i++)
		{
			int min = *min_element(v.begin() + i - 1, v.begin() + i + 2);
			int max = *max_element(v.begin() + i - 1, v.begin() + i + 2);

			if ((v[i] != min) && (v[i] != max))
				cnt++;
		}

		printf("#%d %d\n", test_case, cnt);

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}