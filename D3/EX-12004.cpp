
#include<iostream>
#include<cstring>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int arr[10][10];

	cin >> T;

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			arr[i][j] = i * j;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N;
		string out = "No";

		cin >> N;

		for (int i = 1; i < 10; i++)
		{
			for (int j = 1; j < 10; j++)
			{
				if (arr[i][j] == N)
				{
					out = "Yes";
					break;
				}
			}
			if (out == "Yes")
				break;
		}
		printf("#%d ", test_case);
		cout << out << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}