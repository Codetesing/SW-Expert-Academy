
#include<iostream>
#include<vector>
#include<string>

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
		vector<string> DECK(N);

		for (int i = 0; i < N; i++) cin >> DECK[i];

		printf("#%d ", test_case);

		if (N % 2 == 1)
		{
			for (int i = 0; i < N / 2; i++)
				cout << DECK[i] << ' ' << DECK[i + N / 2 + 1] << ' ';
			cout << DECK[N / 2];
		}
		else
		{
			for (int i = 0; i < N / 2; i++)
				cout << DECK[i] << ' ' << DECK[i + N / 2] << ' ';
		}
		cout << '\n';
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}