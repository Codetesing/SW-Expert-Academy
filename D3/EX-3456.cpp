
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
		vector<int> in(3); cin >> in[0] >> in[1] >> in[2];
		
		printf("#%d ", test_case);
		if (in[0] == in[1])
			cout << in[2];
		else if (in[0] == in[2])
			cout << in[1];
		else
			cout << in[0];
		cout << '\n';
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}