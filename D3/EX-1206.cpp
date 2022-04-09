
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int LIGHTS_OF_BUILDING(vector<int> b, int i)
{
	int max_floor = max(max(b[i - 1], b[i - 2]), max(b[i + 1], b[i + 2]));

	if (b[i] > max_floor)
		return b[i] - max_floor;

	return 0;
}

int main(int argc, char** argv)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int test_case;
	int T;

	for (test_case = 1; test_case <= 10; ++test_case)
	{
		int N; cin >> N;
		vector<int> BUILDING(N + 4);
		for (int i = 2; i < N + 2; i++) cin >> BUILDING[i];
		BUILDING[0] = 0; BUILDING[1] = 0; BUILDING[N + 2] = 0; BUILDING[N + 3] = 0;
		
		int out = 0;
		for (int i = 2; i < N + 2; i++)
			out += LIGHTS_OF_BUILDING(BUILDING, i);

		cout << '#' << test_case << ' ' << out << '\n';
	}
	return 0;
}