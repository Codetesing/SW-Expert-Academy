
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
		long long int N; cin >> N;

		long long int left = (N - 1) * (N - 1) * 2 + 1;
		long long int right = N * N * 2 - 1;

		printf("#%d %lld %lld\n", test_case, left, right);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}