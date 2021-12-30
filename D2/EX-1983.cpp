/////////////////////////////////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>

using namespace std;

typedef struct score{
	int mid;
	int last;
	int assign;
}score;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, K;
		int grade = 1;

		cin >> N >> K;
		
		vector<score> v(N);
		vector<double> student(N);
		string out;
		int tmp = N / 10;

		for (int i = 0; i < N; i++)
			scanf("%d %d %d", &v[i].mid, &v[i].last, &v[i].assign);

		for (int i = 0; i < N; i++)
			student[i] = v[i].mid * 0.35 + v[i].last * 0.45 + v[i].assign * 0.2;

		for (int i = 0; i < N; i++)
			if (student[i] > student[K - 1])
				grade++;

		if (grade <= tmp)
			out = "A+";
		else if (grade <= tmp * 2)
			out = "A0";
		else if (grade <= tmp * 3)
			out = "A-";
		else if (grade <= tmp * 4)
			out = "B+";
		else if (grade <= tmp * 5)
			out = "B0";
		else if (grade <= tmp * 6)
			out = "B-";
		else if (grade <= tmp * 7)
			out = "C+";
		else if (grade <= tmp * 8)
			out = "C0";
		else if (grade <= tmp * 9)
			out = "C-";
		else if (grade <= tmp * 10)
			out = "D0";

		cout << "#" << test_case << ' ' << out << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}