#include <iostream>
#include <vector>
#include <string>

#define MAX 201

using namespace std;

int main(int argc, char** argv)
{
	string in;
	vector<int> out;

	cin >> in;
	int len = in.length();

	for (int i = 0; i < len; i++)
		out.push_back(in[i] - 'A' + 1);

	for (auto i : out)
		cout << i << ' ';
	printf("\n");

	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}