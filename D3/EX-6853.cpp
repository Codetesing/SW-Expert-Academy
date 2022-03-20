
#include<iostream>

using namespace std;

int SQUAR(int x1, int y1, int x2, int y2, int x, int y)
{
	if (((x1 == x) && ((y1 <= y) && (y2 >= y))) || ((x2 == x) && ((y1 <= y) && (y2 >= y))) || ((y1 == y) && ((x1 <= x) && (x2 >= x))) || ((y2 == y) && ((x1 <= x) && (x2 >= x))))
		return 1;
	
	if ((x1 < x) && (x2 > x) && (y1 < y) && (y2 > y))
		return 0;
	else
		return 2;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int X1, Y1, X2, Y2; cin >> X1 >> Y1 >> X2 >> Y2;
		int N; cin >> N;		
		int X, Y;
		int out[3] = { 0 };

		for (int i = 0; i < N; i++)
		{
			cin >> X >> Y;
			out[SQUAR(X1, Y1, X2, Y2, X, Y)]++;
		}
		
		printf("#%d %d %d %d\n", test_case, out[0], out[1], out[2]);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}