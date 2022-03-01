#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cmath>

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
		int k; cin >> k;

		int n = pow(2, k);

		int len = n * 2;
		int* tree = new int[len];

		for (int i = 0; i < n; i++) scanf("%d", &tree[len - 1 - i]);

		int left = len - 2;
		int right = len - 1;
		int parent = left / 2;
		int sum = 0;

		while (parent != 0)
		{
			sum += abs(tree[left] - tree[right]);
			tree[parent] = tree[left] >= tree[right] ? tree[left] : tree[right];
			left -= 2;
			right -= 2;
			parent = left / 2;
		}

		printf("#%d %d\n", test_case, sum);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}