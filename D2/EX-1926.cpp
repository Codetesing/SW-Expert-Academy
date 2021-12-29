#include <iostream>
#include <vector>

using namespace std;

int IS_3(int n)
{
	int rtn = n;
	int cnt3 = 0;

	for (int i = 10; n != 0; n /= 10)
		if ((n % i) != 0 && (n % i) % 3 == 0)
			cnt3++;

	if (cnt3 == 0)
		return rtn;
	else
		return cnt3 * -1;
}

int main()
{
	int N;
	vector<int> v;

	cin >> N;

	for (int i = 1; i <= N; i++)
		v.push_back(IS_3(i));

	for (int i = 0; i < N; i++)
	{
		if (v[i] > 0)
			printf("%d ", v[i]);
		else
		{
			for (int j = v[i]; j < 0; j++)
				printf("-");
			printf(" ");
		}
	}

	return 0;
}