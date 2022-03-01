
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
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
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
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}