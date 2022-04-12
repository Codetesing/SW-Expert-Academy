#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	vector<int> DIVIDE;

	for (int temp = 0, i = 1; temp <= 9; temp++, i *= 10)
		DIVIDE.push_back(i);
	for (int temp = 0, i = 2; temp < 9; temp++, i *= 10)
		DIVIDE.push_back(i);
	for (int temp = 0, i = 5; temp < 9; temp++, i *= 10)
		DIVIDE.push_back(i);
	for (int temp = 1, i = 25; temp < 9; temp++, i *= 10)
		DIVIDE.push_back(i);
	for (int temp = 2, i = 125; temp < 9; temp++, i *= 10)
		DIVIDE.push_back(i);

	sort(DIVIDE.begin(), DIVIDE.end());

	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int X; cin >> X;

		int cnt = 0;
		for (int i = 0; i < DIVIDE.size(); i++)
			if (X >= DIVIDE[i])
				cnt++;

		cout << '#' << test_case << ' ' << cnt << '\n';
	}
	return 0;
}