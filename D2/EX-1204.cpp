#define _CRT_SECURE_NO_WARNINGS
#define MAX 101

#include<iostream>
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
		int temp, sc, out;
		int score[MAX] = { 0 };

		cin >> temp;

		for (int i = 0; i < 1000; i++)
		{
			cin >> sc;
			score[sc]++;
		}

		int most = *max_element(score, score + 100);

		for (int i = 0; i < 101; i++)
			if (most == score[i])
				out = i;

		printf("#%d %d\n", test_case, out);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}