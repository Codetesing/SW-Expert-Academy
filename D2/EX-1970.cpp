#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int money[] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 };
	int size = 8;

	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		vector<int> out;
		int N;

		cin >> N;

		for (int i = 0; i < size; i++)
		{
			out.push_back(N / money[i]);
			N %= money[i];
		}
		printf("#%d\n", test_case);
		for (int i = 0; i < size; i++)
			printf("%d ", out[i]);
		printf("\n");
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}