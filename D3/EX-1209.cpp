
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int test_case;
	int T = 10;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N; cin >> N;
		int arr[100][100];

		for (int i = 0; i < 100; i++)
			for (int j = 0; j < 100; j++)
				cin >> arr[i][j];

		int max = 0, sum = 0;
		// �� row(i) �� ��
		for (int i = 0; i < 100; i++)
		{
			sum = 0;
			for (int j = 0; j < 100; j++)
				sum += arr[i][j];

			if (max < sum)
				max = sum;
		}

		// �� col(i) �� ��
		for (int i = 0; i < 100; i++)
		{
			sum = 0;
			for (int j = 0; j < 100; j++)
				sum += arr[j][i];

			if (max < sum)
				max = sum;
		}

		// �� ���� �밢��
		sum = 0;
		for (int i = 0; i < 100; i++)
		{
			sum += arr[i][i];
			if (max < sum)
				max = sum;
		}

		// ������ �밢��
		sum = 0;
		for (int i = 0; i < 100; i++)
		{
			sum += arr[i][100 - 1 - i];
			if (max < sum)
				max = sum;
		}

		cout << '#' << test_case << ' ' << max << '\n';
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}