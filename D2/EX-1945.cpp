#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int DIV[] = { 2, 3, 5, 7, 11 };
	
	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N;
		int MOD[] = { 0, 0, 0, 0, 0 };
		cin >> N;

		for (int i = 0; i < 5; i++)
			while (N % DIV[i] == 0)
			{
				MOD[i]++;
				N /= DIV[i];
			}

		printf("#%d ", test_case);
		for (int i = 0; i < 5; i++)
			printf("%d ", MOD[i]);
		printf("\n");
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}