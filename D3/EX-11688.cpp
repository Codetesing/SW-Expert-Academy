
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
		string in;
		int a = 1, b = 1;

		cin >> in;

		int len = in.length();

		for (int i = 0; i < len; i++)
		{
			if (in[i] == 'L')
				b = a + b;
			else if (in[i] == 'R')
				a = a + b;
		}

		printf("#%d %d %d\n", test_case, a, b);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}