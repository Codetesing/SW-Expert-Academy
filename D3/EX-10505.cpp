
#include<iostream>
#include<vector>
#include<cmath>

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

		vector<int> v(N);
		for (int i = 0; i < N; i++)
			cin >> v[i];

		int sum = 0;
		for (int i = 0; i < N; i++)
			sum += v[i];

		float eval = sum / (float)N;

		int cnt = 0;
		for (int i = 0; i < N; i++)
			if (eval >= v[i])
				cnt++;

		printf("#%d %d\n", test_case, cnt);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}