
#include<iostream>
#include<vector>
#include<algorithm>

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
		vector<int> out;
		int in, sum;

		for (int i = 0; i < 10; i++)
		{
			sum = 0;
			cin >> in;
			
			for (; in != 0; in /= 10)
				sum += in % 10;

			out.push_back(sum);
		}

		int max = *max_element(out.begin(), out.end());
		int min = *min_element(out.begin(), out.end());

		printf("#%d %d %d\n", test_case, max, min);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}