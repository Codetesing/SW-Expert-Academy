#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, a, b;
	char out;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{

		cin >> a >> b;

		if (a > b)
			out = '>';
		else if (a == b)
			out = '=';
		else
			out = '<';

		printf("#%d %c\n", test_case, out);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}