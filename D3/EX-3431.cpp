
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
		int L, U, X; cin >> L >> U >> X;

		printf("#%d ", test_case);
		if (X > U)
			cout << -1;
		else
		{
			if (X >= L)
				cout << 0;
			else
				cout << L - X;
		}
		cout << '\n';
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}