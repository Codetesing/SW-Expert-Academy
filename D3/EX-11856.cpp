
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
		string out = "Yes";

		cin >> in;

		int tmp[26] = { 0 };

		for (int i = 0; i < 4; i++)
			tmp[in[i] - 'A']++;

		for(int i = 0; i < 26; i++)
			if ((tmp[i] != 0))
			{
				if (tmp[i] != 2)
				{
					out = "No";
					break;
				}
			}

		printf("#%d ", test_case);
		cout << out << '\n';
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}