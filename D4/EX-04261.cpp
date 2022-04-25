#include<iostream>
#include<string>
#include<vector>

using namespace std;

char TRANS(char a)
{
	if ((a == 'a') || (a == 'b') || (a == 'c'))
		return '2';
	if ((a == 'd') || (a == 'e') || (a == 'f'))
		return '3';
	if ((a == 'g') || (a == 'h') || (a == 'i'))
		return '4';
	if ((a == 'j') || (a == 'k') || (a == 'l'))
		return '5';
	if ((a == 'm') || (a == 'n') || (a == 'o'))
		return '6';
	if ((a == 'p') || (a == 'q') || (a == 'r') || (a == 's'))
		return '7';
	if ((a == 't') || (a == 'u') || (a == 'v'))
		return '8';
	if ((a == 'w') || (a == 'x') || (a == 'y') || (a == 'z'))
		return '9';
}

bool IS_VOCA(string key, string voca)
{
	if (key.size() != voca.size())
		return false;

	for (int i = 0; i < key.size(); i++)
	{
		if (key[i] == 1)
			return false;

		if (key[i] != TRANS(voca[i]))
			return false;
	}
	return true;
}

int main(int argc, char** argv)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		string S; cin >> S;
		int N; cin >> N;
		vector<string> voca(N);
		for (int i = 0; i < N; i++) cin >> voca[i];

		int out = 0;
		for (int i = 0; i < N; i++)
			if (IS_VOCA(S, voca[i]))
				out++;

		cout << '#' << test_case << ' ' << out << '\n';
	}
	return 0;
}