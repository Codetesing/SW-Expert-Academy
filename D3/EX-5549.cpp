
#include<iostream>
#include<cstring>

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
		string in; cin >> in;
		int len = in.length();

		printf("#%d ", test_case);
		if (((in[len - 1] - '0') % 2) == 0)
			printf("Even\n");
		else
			printf("Odd\n");
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}