
#include<iostream>
#include<cstring>
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
		vector<string> voca(5);
		string out = "";
		vector<int> len;
		for (int i = 0; i < 5; i++)
		{
			cin >> voca[i];
			len.push_back(voca[i].length());
		}
		int MAX_LEN = *max_element(len.begin(), len.end());


		for (int i = 0; i < MAX_LEN; i++)
			for (int j = 0; j < 5; j++)
				if (len[j] > i)
					out += voca[j][i];

		printf("#%d ", test_case);
		cout << out << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}