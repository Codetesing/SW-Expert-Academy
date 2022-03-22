#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool INCREASE(int temp)
{
	string a = to_string(temp);
	int len = a.length();
	
	for (int i = 0; i < len - 1; i++)
		if (a[i] > a[i + 1])
			return false;
	return true;
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
		int N; scanf("%d", &N);
		vector<int> A(N);
		for (int i = 0; i < N; i++)
			scanf("%d", &A[i]);

		int out = -1;
		for(int i = 0; i < N - 1; i++)
			for (int j = i + 1; j < N; j++)
			{
				int temp = A[i] * A[j];
				if (temp > out)
					if (INCREASE(temp))
						out = temp;
			}
		printf("#%d %d\n", test_case, out);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}