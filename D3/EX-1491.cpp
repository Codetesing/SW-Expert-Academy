
#include<iostream>
#include<climits>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, A, B; cin >> N >> A >> B;
		long long out = LONG_MAX;
		long long temp;

		for (long long R = 1; R * R <= N; R++)
		{
			long long C = N / R;
			for (long long j = 1; j <= C; j++)
			{
				temp = (A * abs(R - j)) + (B * (N - (R * j)));
				if (temp < out)
					out = temp;
			}
		}

		cout << '#' << test_case << ' ' << out << '\n';
	}
	return 0;
}