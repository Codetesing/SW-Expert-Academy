
#include<iostream>
#include<cstring>
#include<algorithm>

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

		reverse(in.begin(), in.end());

		for (int i = 0; i < in.length(); i++)
		{
			if (in[i] == 'b')
				in[i] = 'd';
			else if (in[i] == 'p')
				in[i] = 'q';
			else if (in[i] == 'q')
				in[i] = 'p';
			else
				in[i] = 'b';
		}

		printf("#%d ", test_case);
		cout << in << '\n';
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}