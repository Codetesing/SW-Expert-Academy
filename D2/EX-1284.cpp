
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
		int P, Q, R, S, W;

		cin >> P >> Q >> R >> S >> W;

		int a = P * W;
		int b = Q;

		if (R < W)
			b += (W - R) * S;

		int out = a > b ? b : a;

		printf("#%d %d\n", test_case, out);

	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}