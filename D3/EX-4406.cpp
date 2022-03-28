
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	char del[5] = { 'a', 'e', 'i', 'o', 'u' };

	cin >> T;
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		string in; cin >> in;

		for (int i = 0; i < 5; i++)
			in.erase(remove(in.begin(), in.end(), del[i]), in.end());

		cout << '#' << test_case << ' ' << in << '\n';
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}