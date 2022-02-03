
#include<iostream>
#include<cstring>

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
		int N; cin >> N;

		string in[2];

		for (int i = 0; i < 2; i++)
		{
			cin >> in[i];
		}

		int cnt = 0;
		for (int i = 0; i < N; i++)
			if (in[0][i] == in[1][i])
				cnt++;

		cout << "#" << test_case << ' '<< cnt << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}