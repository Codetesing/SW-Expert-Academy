
#include<iostream>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	string temp;
	cin >> T;
	getline(cin, temp);
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		string in; getline(cin, in);
		string out = "";
		out += toupper(in[0]);
		int len = in.length();

		for (int i = 1; i < len - 1; i++)
			if (in[i] == ' ')
				out += toupper(in[i + 1]);

		printf("#%d ", test_case);
		cout << out << '\n';
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}