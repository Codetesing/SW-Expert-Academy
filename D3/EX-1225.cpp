
#include<iostream>
#include<queue>

using namespace std;

int main(int argc, char** argv)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int test_case;
	int T = 10;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int tmp; cin >> tmp;
		int N = 8;
		queue<int> q;

		int temp;
		for (int i = 0; i < 8; i++)
		{
			cin >> temp;
			q.push(temp);
		}

		int minus_num = 1;
		while (1)
		{
			temp = q.front();
			q.pop();
			temp -= minus_num++;

			if (minus_num > 5)
				minus_num = 1;

			if (temp <= 0)
			{
				q.push(0);
				break;
			}
			else
				q.push(temp);
		}

		cout << '#' << test_case;
		while (!q.empty())
		{
			temp = q.front();
			q.pop();
			cout << ' ' << temp;
		}
		cout << '\n';
	}
	return 0;
}