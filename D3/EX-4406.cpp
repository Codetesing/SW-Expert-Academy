
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
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		string in; cin >> in;

		for (int i = 0; i < 5; i++)
			in.erase(remove(in.begin(), in.end(), del[i]), in.end());

		cout << '#' << test_case << ' ' << in << '\n';
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}