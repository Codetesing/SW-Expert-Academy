
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
		int card[12] = { 0 };
		for (int i = 2; i < 10; i++)
			card[i] = 4;
		card[10] = 16;
		card[11] = 4;

		int N; cin >> N;
		int n, sum = 0;

		for (int i = 0; i < N; i++)
		{
			cin >> n;
			sum += n;
			card[n]--;
		}
		
		int tok = 52 - N;
		int temp = 21 - sum;
		
		int over = 0;
		int low = 0;

		for (int i = 0; i <= temp; i++)
			low += card[i];
		for (int i = temp + 1; i < 12; i++)
			over += card[i];

		printf("#%d ", test_case);
		if (low < over)
			printf("STOP\n");
		else
			printf("GAZUA\n");
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}