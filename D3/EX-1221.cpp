
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	string num[10] = { "ZRO", "ONE", "TWO", "THR", "FOR", "FIV", "SIX", "SVN", "EGT", "NIN" };

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		string temp; cin >> temp;
		int N; cin >> N;

        string in;
		vector<int> cnt(10, 0);
        for (int j = 0; j < N; j++)
        {
            cin >> in;
            
			for(int i = 0; i < 10; i++)
				if (num[i] == in)
				{
					cnt[i]++;
					break;
				}
        }

		cout << temp << '\n';
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < cnt[i]; j++)
				cout << num[i] << ' ';
		cout << '\n';
	}

	return 0;
}