#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, a, b;

	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> a >> b;
		
		printf("#%d %d %d\n", test_case, a / b, a % b);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}