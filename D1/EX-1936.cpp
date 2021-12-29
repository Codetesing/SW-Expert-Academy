#include <iostream>

using namespace std;

int main()
{
	char winner;

	int A, B;

	cin >> A >> B;

	if (A == 1)
	{
		if (B == 2)
			winner = 'B';
		else if (B == 3)
			winner = 'A';
	}
	else if (A == 2)
	{
		if (B == 1)
			winner = 'A';
		else if (B == 3)
			winner = 'B';
	}
	else if (A == 3)
	{
		if (B == 1)
			winner = 'B';
		else if (B == 2)
			winner = 'A';
	}

	cout << winner << endl;

	return 0;
}