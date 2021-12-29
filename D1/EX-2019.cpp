#include <iostream>

using namespace std;

int main()
{
	int N, mult = 1;

	cin >> N;

	for (int i = 0; i <= N; i++, mult *= 2)
		cout << mult << ' ';
	cout << endl;

	return 0;
}