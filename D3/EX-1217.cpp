
#include<iostream>

using namespace std;

int POW(int a, int p)
{
	if (p == 1)
		return a;

	return a * POW(a, p - 1);
}

int main(int argc, char** argv)
{
	int test_case;
	int T = 10;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N; cin >> N;
		int A, P; cin >> A >> P;

		int out = POW(A, P);

		cout << '#' << test_case << ' ' << out << '\n';
	}
	return 0;
}