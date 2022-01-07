#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

bool PELINDROME(int n)
{
	string temp = "";

	for (int i = 10; n != 0; n /= 10)
		temp += (char)((n % 10) + '0');

	string temp2 = temp;

	reverse(temp.begin(), temp.end());

	if (temp == temp2)
		return true;

	return false;
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
		int A, B; cin >> A >> B;

		int cnt = 0;
		for (int i = A; i <= B; i++)
			if(i == (ceil(sqrt(i)) * ceil(sqrt(i))))
				if (PELINDROME(i))
					if (PELINDROME(sqrt(i)))
						cnt++;

		printf("#%d %d\n", test_case, cnt);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}