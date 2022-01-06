#define _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
//°¡Àå  ¹Ù±ù¿¡ ²ÈÈù°æ¿ì 0Á¡ÀÎ°Í¸¸ Ã³¸®. 
int main(void)
{

	int tc, num;
	char alpha;
	int bt;
	int b;
	int o;
	int global;
	int og, bg;

	scanf("%d", &tc);
	for (int i = 0; i < tc; i++)
	{
		scanf("%d", &num);
		b = 1; o = 1;
		global = 0;
		bg = 0;
		og = 0;
		for (int x = 0; x < num; x++)
		{
			cin >> alpha >> bt;
			if (alpha == 'B') {
				for (int k = 0; k < bg; k++)
				{
					if (b < bt) {
						b++;
					}
					else if (b > bt) {
						b--;
					}
					else {
						break;
					}
				}

				while (1) {
					if (b < bt) {
						b++;
						og++;
						global++;
					}
					else if (b > bt) {
						b--;
						og++;
						global++;
					}
					else {
						og++;
						global++;
						bg = 0;
						break;
					}
				}

			}
			else {
				for (int k = 0; k < og; k++)
				{
					if (o < bt) {
						o++;
					}
					else if (o > bt) {
						o--;
					}
					else {
						break;
					}
				}

				while (1) {
					if (o < bt) {
						o++;
						bg++;
						global++;
					}
					else if (o > bt) {
						o--;
						bg++;
						global++;
					}
					else {
						global++;
						bg++;
						og = 0;
						break;
					}
				}
			}
		}
		printf("#%d %d\n", i + 1, global);

	}

	return 0;
}