
#include<iostream>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T = 10;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N; cin >> N;
		string in; cin >> in;

		for (int i = 0; i < in.length() - 1; i++)
			if ((in[i] == in[i + 1]))
			{
				in.erase(i, 2);
				i = -1;
			}

		cout << '#' << test_case << ' ' << in << '\n';
	}
	return 0;
}