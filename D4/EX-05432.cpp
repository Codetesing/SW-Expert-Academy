#include<iostream>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		string in; cin >> in;

		long long out = 0;

		int cnt = 0;
		for (int i = 0; i < in.size(); i++)
		{
			if (in[i] == '(')
			{
				if (in[i + 1] == ')')
				{
					out += cnt;
					i++;
				}
				else
					cnt++;
			}
			else
			{
				out += 1;
				cnt--;
			}
		}

		cout << '#' << test_case << ' ' << out << '\n';
	}
	return 0;
}