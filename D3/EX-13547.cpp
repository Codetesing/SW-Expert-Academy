
#include<iostream>
#include<string>

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
		int loss = 0;

		for (int i = 0; i < len; i++)
			if (in[i] == 'x')
				loss++;

		printf("#%d ", test_case);
		if (loss < 8)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}