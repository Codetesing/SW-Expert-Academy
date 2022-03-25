#define MAX 1000001

#include<iostream>
#include<cstring>

using namespace std;

bool PRIME[MAX];

void ERATOSTENES(int n)
{
	PRIME[0] = false;
	PRIME[1] = false;

	for(int i = 2; i * i <= n;)
	{
		for (int j = i; j * i <= n; j++)
			PRIME[i * j] = false;

		for (int j = i + 1; ;j++)
		{
			if (j == n)
				return;

			if (PRIME[j])
			{
				i = j;
				break;
			}
		}
	}
}

bool IS_SPECIAL(int prime, int d)
{
	for (; prime != 0; prime /= 10)
		if (prime % 10 == d)
			return true;
	
	return false;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	memset(PRIME, true, sizeof(PRIME));
	ERATOSTENES(MAX - 1);

	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int D, A, B; cin >> D >> A >> B;

		int cnt = 0;

		for (int i = A; i <= B; i++)
			if (PRIME[i])
				if (IS_SPECIAL(i, D))
					cnt++;

		printf("#%d %d\n", test_case, cnt);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}