#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

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
		int N = 5, temp = 0, sum = 0;
		for (int i = 0; i < N; i++)
		{
			scanf("%d", &temp);
			if (temp < 40)
				temp = 40;
			sum += temp;
		}
		cout << '#' << test_case << ' ' << sum / 5 << '\n';
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}