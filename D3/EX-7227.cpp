#include <iostream>
#include <cstring>
using namespace std;

long long result;
int arr[20][2];
bool visit[20];

void DFS(int pos, int num, int N) {
    if (num == N / 2) {
        long long sum = 0;
        long long x = 0;
        long long y = 0;

        for (int i = 0; i < N; i++) {
            if (visit[i]) {
                x += arr[i][0];
                y += arr[i][1];
            }
            else {
                x -= arr[i][0];
                y -= arr[i][1];
            }
        }
        sum = x * x + y * y;
        if (sum < result)
            result = sum;
        return;
    }

    for (int i = pos + 1; i < N; i++) {
        if (!visit[i]) {
            visit[i] = true;
            DFS(i, num + 1, N);
            visit[i] = false;
        }
    }
}

int main(int argc, char** argv)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int test_case;
    int T;
    cin >> T;
    int N;

    for (test_case = 1; test_case <= T; ++test_case) {
        cin >> N;

        memset(arr, 0, sizeof(arr));

        memset(visit, false, sizeof(visit));

        for (int i = 0; i < N; i++)
            cin >> arr[i][0] >> arr[i][1];

        result = 80000000001;

        DFS(-1, 0, N);

        cout << "#" << test_case << " " << result << "\n";
    }
    return 0;
}