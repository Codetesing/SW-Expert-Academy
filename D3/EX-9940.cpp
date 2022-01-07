
#include<iostream>
#include<vector>
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
		bool* visit = new bool[N + 1];
		vector<int> v(N);
		for (int i = 0; i < N; i++)
		{
			cin >> v[i];
			visit[i + 1] = false;
		}

		string out = "Yes";
		for (int i = 0; i < N; i++)
		{
			if (visit[v[i]])
			{
				out = "No";
				break;
			}
			visit[v[i]] = true;
		}
		printf("#%d ", test_case);
		cout << out << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}