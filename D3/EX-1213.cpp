
#include<iostream>
#include<string>

using namespace std;

int find_len, index;

bool IS_RIGHT(string find, string str)
{
	for (int i = 0; i < find_len; i++)
		if (str[index + i] != find[i])
			return false;
	return true;
}

int main(int argc, char** argv)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int test_case;
	int T = 10;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N; cin >> N;
		string find; cin >> find;
		string temp; cin >> temp;

		cout << find << endl;
		cout << temp << endl;

		int max_len = temp.length();
		find_len = find.length();

		int cnt = 0;
		for (index = 0; index < max_len; index++)
			if (IS_RIGHT(find, temp))
				cnt++;

		cout << '#' << test_case << ' ' << cnt << '\n';
	}
	return 0;
}