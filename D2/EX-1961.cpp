#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

void ROTATE_90(vector<vector<char>> *v, int n)
{
	vector<vector<char>> temp(n, vector<char>(n));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			temp[j][n - 1 - i] = (*v)[i][j];

	*v = temp;
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
		int N;
		cin >> N;
		string sum;
		
		vector<vector<char>> v(N, vector<char>(N));
		vector<string> out1, out2, out3;
		
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				cin >> v[i][j];

		ROTATE_90(&v, N);

		for (int i = 0; i < N; i++)
		{
			sum = "";
			for (int j = 0; j < N; j++)
				sum += v[i][j];
			out1.push_back(sum);
		}

		ROTATE_90(&v, N);

		for (int i = 0; i < N; i++)
		{
			sum = "";
			for (int j = 0; j < N; j++)
				sum += v[i][j];
			out2.push_back(sum);
		}

		ROTATE_90(&v, N);

		for (int i = 0; i < N; i++)
		{
			sum = "";
			for (int j = 0; j < N; j++)
				sum += v[i][j];
			out3.push_back(sum);
		}

		printf("#%d\n", test_case);
		for (int i = 0; i < N; i++)
			cout << out1[i] << ' ' << out2[i] << ' ' << out3[i] << '\n';
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}