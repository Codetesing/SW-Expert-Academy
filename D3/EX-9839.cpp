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
		int N; cin >> N;

		vector<int> v(N);
		for (int i = 0; i < N; i++)
			cin >> v[i];

		int out = -1;
		for (int i = 0; i < N - 1; i++)
			for (int j = i + 1; j < N; j++)
			{
				int num = v[i] * v[j];

				int digit = num % 10;
				bool chk = true;

				num = num / 10;
				while (num > 0) {
					if (digit - 1 == num % 10) {
						digit--;
					}
					else {
						chk = false;
						break;
					}
					num = num / 10;
				}
				if (chk == true && out < v[i] * v[j]) {
					out = v[i] * v[j];
				}
			}

		printf("#%d %d\n", test_case, out);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}