
#include<iostream>
#include<string>

using namespace std;

int NUM_HOLE(char a)
{
	if (a == 'B')
		return 2;
	else if ((a == 'A') || (a == 'D') || (a == 'O') || (a == 'P') || (a == 'Q') || (a == 'R'))
		return 1;
	else
		return 0;
}

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
		string IN_A, IN_B; cin >> IN_A >> IN_B;

		int len_A = IN_A.length();
		int len_B = IN_B.length();
		bool flag = true;

		if (len_A == len_B)
		{
			for (int i = 0; i < len_A; i++)
			{
				if (NUM_HOLE(IN_A[i]) != NUM_HOLE(IN_B[i]))
				{
					flag = false;
					break;
				}
			}
		}
		else
			flag = false;

		printf("#%d ", test_case);
		if (flag)
			printf("SAME\n");
		else
			printf("DIFF\n");
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}