#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T, N;
	
	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		scanf("%d", &N);
		vector<int> v(N);
		long long plus = 0;

		for (int i = 0; i < N; i++)
			scanf("%d", &v[i]);

		long long anc = v[N - 1];

		for (int i = N - 1; i >= 0; i--) {
			if (v[i] < anc) 
				plus += (anc - v[i]);
			else if (v[i] > anc) 
				anc = v[i];
		}

		printf("#%d %lld\n", test_case, plus);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}