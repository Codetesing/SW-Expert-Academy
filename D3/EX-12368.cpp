
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
		int A, B;

		cin >> A >> B;

		printf("#%d %d\n", test_case, (A + B) % 24);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}