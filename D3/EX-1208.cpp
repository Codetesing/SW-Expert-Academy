
#include<iostream>
#include<vector>
#include<algorithm>

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
		int dump; cin >> dump;
		int box[100];
		for (int i = 0; i < 100; i++) cin >> box[i];

		int* max_ind;
		int* min_ind;
		for (int i = 0; i < dump; i++)
		{
			max_ind = max_element(box, box + 100);
			min_ind = min_element(box, box + 100);

			if (*max_ind - *min_ind > 1)
			{
				*max_ind = (*max_ind) - 1;
				*min_ind = (*min_ind) + 1;
			}
			else
				break;
		}

		int out = (*max_element(box, box + 100)) - (*min_element(box, box + 100));

		cout << '#' << test_case << ' ' << out << '\n';
	}
	return 0;
}