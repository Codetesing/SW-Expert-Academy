#define _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include<algorithm>
typedef long long ll;
using namespace std;
char board[20][20];
//8방향 
int mx[8] = { -1,-1,-1,0,0,1,1,1 };
int my[8] = { -1,0,1,-1,1,-1,0,1 };
void solve(int i, int len)
{
	int posx, posy;
	int flag;

	//4가지 방향 우 하 좌하 우하 
	for (int x = 0; x < len; x++)
	{
		for (int y = 0; y < len; y++)
		{
			//좌 
			if (board[x][y] == '.') continue;
			for (int k = 0; k < 8; k++)
			{
				flag = 0;
				posx = x + mx[k];
				if (!(posx >= 0 && posx < len)) continue;
				posy = y + my[k];
				if (!(posy >= 0 && posy < len)) continue;

				if (board[posx][posy] == '.') continue;
				else {

					for (int j = 0; j < 3; j++)
					{
						posx = posx + mx[k];
						if (!(posx >= 0 && posx < len)) break;
						posy = posy + my[k];
						if (!(posy >= 0 && posy < len)) break;
						if (board[posx][posy] == '.') break;
						flag++;
					}
				}
				if (flag == 3) {
					printf("#%d YES\n", i + 1);
					return;
				}
			}
		}
	}
	printf("#%d NO\n", i + 1);
}
int main(void)
{
	int size;
	int len;

	scanf("%d", &size);
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &len);
		for (int x = 0; x < len; x++)
		{
			scanf("%s", board[x]);
		}
		//가능성이 없는곳은 제외를 해줘야함
		solve(i, len);
	}
	return 0;
}