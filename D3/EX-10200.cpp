
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
		int N, A, B; cin >> N >> A >> B;

		int MAX = min(A, B);
		
		int MIN;
		if (A + B <= N)
			MIN = 0;
		else
			MIN = A + B - N;

		printf("#%d %d %d\n", test_case, MAX, MIN);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}