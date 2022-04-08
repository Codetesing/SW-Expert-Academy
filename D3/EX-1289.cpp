
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
		int str_len = in.length();
		int cnt = 0;

		if (in[0] == '1')
			cnt++;
		for (int i = 1; i < str_len; i++)
			if (in[i] != in[i - 1])
				cnt++;

		cout << '#' << test_case << ' ' << cnt << '\n';
	}
	return 0;
}