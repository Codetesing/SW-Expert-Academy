#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string in;

	cin >> in;

	transform(in.begin(), in.end(), in.begin(), ::toupper);

	cout << in << endl;

	return 0;
}