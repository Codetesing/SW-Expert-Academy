
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
		int N, M; cin >> N >> M;
		int UNI, TWIN;

		TWIN = N - M;
		UNI = M - TWIN;

		printf("#%d %d %d\n", test_case, UNI, TWIN);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}