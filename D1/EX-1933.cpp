#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N;
	vector<int> v;

	cin >> N;

	for (int i = 1; i * i <= N; i++)
		if (N % i == 0)
		{
			v.push_back(i);
			if (N / i != i)
				v.push_back(N / i);
		}

	sort(v.begin(), v.end());

	for (int i = 0, size = v.size(); i < size; i++)
		printf("%d ", v[i]);
	printf("\n");
	
	return 0;
}