
#include<iostream>
#include<cstring>

using namespace std;

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
		string P, Q;
		string out = "Y";

		cin >> P;
		cin >> Q;

		int lenp = P.length();
		int lenq = Q.length();
		int tok = 0;

		if (lenp == lenq - 1)
		{
			for (int i = 0; i < lenp; i++)
				if (P[i] != Q[i])
					tok = 1;
			if (tok == 0)
				if (Q[lenq - 1] == 'a')
					out = "N";
		}

		printf("#%d ", test_case);
		cout << out << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}