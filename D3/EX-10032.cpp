
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
		int N, K; cin >> N >> K;

		int out;
		if (N % K == 0)
			out = 0;
		else
			out = 1;

		printf("#%d %d\n", test_case, out);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}