
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
		int N; cin >> N;

		int H = (N / 30);
		int M = (N % 30) * 2;

		printf("#%d %d %d\n", test_case, H, M);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}