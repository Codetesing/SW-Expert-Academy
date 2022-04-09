#define MOD 1234567891
#define MAX 1000001

#include<iostream>

using namespace std;

long long fact[MAX] = { 1, 1, };

long long FERMA(long long n, long long mod)
{
	if (mod == 0)
		return 1;

	long long temp = FERMA(n, mod / 2);
	long long out = (temp * temp) % MOD;

	if (mod % 2 == 0)
		return out;
	else
		return (n * out) % MOD;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (int i = 2; i < MAX; i++)
		fact[i] = (fact[i - 1] * i) % MOD;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, R; cin >> N >> R;
		long long temp, out;

		temp = FERMA((fact[R] * fact[N - R]) % MOD, MOD - 2);
		out = (temp * fact[N]) % MOD;

		cout << '#' << test_case << ' ' << out << '\n';
	}
	return 0;
}