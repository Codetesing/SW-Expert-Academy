#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N; cin >> N;
		char map[21][21];
		vector<int> row;
		vector<int> col;

		for (int i = 0; i < N; i++)
			cin >> map[i];

		for(int i = 0; i < N; i++)
			for(int j = 0; j < N; j++)
				if (map[i][j] == '#')
				{
					row.push_back(i);
					col.push_back(j);
				}

		bool flag = true;
		
		if (row.size() == 0)
			flag = false;
		else if(row.size() != 1)
		{		
			int min_in_row = *min_element(row.begin(), row.end());
			int max_in_row = *max_element(row.begin(), row.end());
			int min_in_col = *min_element(col.begin(), col.end());
			int max_in_col = *max_element(col.begin(), col.end());

			for (int i = min_in_row; i <= max_in_row; i++)
				for (int j = min_in_col; j <= max_in_col; j++)
				{
					if (map[i][j] != '#')
						flag = false;
					map[i][j] = '.';
				}

			if (max_in_row - min_in_row != max_in_col - min_in_col)
				flag = false;

			if (flag)
			{
				for (int i = 0; i < N; i++)
				{
					for (int j = 0; j < N; j++)
					{
						if (map[i][j] != '.')
						{
							flag = false;
							break;
						}
					}
					if (!flag)
						break;
				}
			}
		}

		printf("#%d ", test_case);
		if (flag)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}