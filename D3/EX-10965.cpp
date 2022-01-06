#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define MAX 10000001
typedef long long ll;
using namespace std;
bool prime[MAX];
int list[3500];
int main(void)
{
	int tc, n, index, pos = 0;
	vector<int> v;
	int sq = sqrt(MAX - 1);
	for (int i = 2; i <= sq; i++)
	{
		if (prime[i]) continue;
		else list[pos++] = i;
		for (int j = i * 2; j < MAX; j += i)
		{
			prime[j] = true; //소수 아닌경우 
		}
	}

	int ans, count;
	scanf("%d", &tc);
	for (int i = 0; i < tc; i++)
	{
		scanf("%d", &n);
		if (!prime[n]) {
			//소수인경우
			printf("#%d %d\n", i + 1, n);
			continue;
		}
		index = 0;
		ans = 1;
		count = 0;
		while (n > 1)
		{

			if (n % list[index] == 0) {
				count++;
				n /= list[index];

			}

			if (n % list[index] != 0) {
				if (count % 2 != 0) ans *= list[index];
				if (!prime[n]) {
					ans *= n;
					break;
				}
				index++;
				if (index == pos) {
					ans *= n;
					break;
				}
				count = 0;
			}
		}
		printf("#%d %d\n", i + 1, ans);
	}
	return 0;
}