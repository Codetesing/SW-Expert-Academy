
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
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
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
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}