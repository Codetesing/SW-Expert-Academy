
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string in;
int out = 0, change_num = 0, len;

void dfs(int ind, int cur)
{
	if (cur == change_num)
	{
		out = max(out, stoi(in));
		return;
	}

	for(int i = ind; i < len - 1; i++)
		for (int j = i + 1; j < len; j++)
		{
			swap(in[i], in[j]);
			dfs(i, cur + 1);
			swap(in[i], in[j]);
		}
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		out = 0;
		cin >> in >> change_num;
		len = in.length();

		if (change_num > len)
			change_num = len;

		dfs(0, 0);

		cout << '#' << test_case << ' ' << out << '\n';
	}
	return 0;
}