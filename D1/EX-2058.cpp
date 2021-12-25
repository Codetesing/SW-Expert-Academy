#include <iostream>

using namespace std;

int main()
{
	int N, sum = 0;

	cin >> N;

	for (int i = 10; N != 0; N /= 10)
		sum += N % i;

	cout << sum << endl;

	return 0;
}