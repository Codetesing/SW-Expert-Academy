
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
		int N; cin >> N;

		int result = 0;
		int num = 0;
		int temp = 1;
		for (int i = 1; i <= N; i++) {
			num += i;
			while (num > N) {
				num -= temp;
				temp++;
			}
			if (num == N) result++;
		}
		printf("#%d %d\n", test_case, result);

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}