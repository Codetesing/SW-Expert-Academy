
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
		int N;

		cin >> N;

		printf("#%d %d\n", test_case, N / 3);

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}