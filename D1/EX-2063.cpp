#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int N;

	cin >> N;

	int *arr = new int[N];

	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	sort(arr, arr + N);

	cout << arr[N / 2] << endl;

	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}