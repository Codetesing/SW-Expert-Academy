
#include<iostream>
#include<vector>

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
		vector<double> P(N);
		vector<int> X(N);
		double out = 0;

		for (int i = 0; i < N; i++)
			cin >> P[i] >> X[i];

		for (int i = 0; i < N; i++)
			out += P[i] * X[i];

		printf("#%d %lf\n", test_case, out);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}