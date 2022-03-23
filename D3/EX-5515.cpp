
#include<iostream>

using namespace std;

int month_date(int i)
{
	switch (i) {
	case 1: return 31;
	case 2: return 29;
	case 3: return 31;
	case 4: return 30;
	case 5: return 31;
	case 6: return 30;
	case 7: return 31;
	case 8: return 31;
	case 9: return 30;
	case 10: return 31;
	case 11: return 30;
	case 12: return 31;
	}
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
		int m, d; cin >> m >> d;
		int date = d - 1;

		for (int i = 1; i < m; i++)
			date += month_date(i);

		date = (date + 4) % 7;
		
		printf("#%d %d\n", test_case, date);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}