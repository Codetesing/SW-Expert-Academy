
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
		float p, q;
		cin >> p >> q;

		float s1 = (1 - p) * q;
		float s2 = p * (1 - q) * q;

		printf("#%d ", test_case);

		if (s1 < s2)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}