#include <iostream>

using namespace std;

int main() {
	int T;
	int N;
	int arr[10];

	scanf("%d", &T);
	for (int tc = 1; tc <= T; tc++) {
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%d", &arr[i]);

		}

		int sum = 0;
		for (int i = 0; i < N; i++) {
			if (arr[i] <= 1 || sum <= 1) {
				sum += arr[i];
			}
			else {
				sum *= arr[i];
			}
		}
		printf("#%d %d\n", tc, sum);

	}
	return 0;
}