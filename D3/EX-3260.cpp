
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int testCase; cin >> testCase;

    for (int tc = 1; tc <= testCase; ++tc) {
        string A, B, result;
        cin >> A >> B;

        // 더 작은 숫자 자릿수 채워주기
        int n = A.size(), m = B.size(), len = max(n, m);
        if (n > m) for (int i = 0; i < n - m; i++) B = "0" + B;
        else for (int i = 0; i < m - n; i++) A = "0" + A;

        int w = 0, sum;
        for (int i = len - 1; i >= 0; i--) {
            sum = (A[i] - '0') + (B[i] - '0') + w;
            if (sum >= 10) w = 1, result.push_back(sum - 10 + '0');
            else w = 0, result.push_back(sum + '0');
        }

        if (w) result.push_back('1');
        reverse(result.begin(), result.end());


        cout << "#" << tc << " ";
        cout << result;
        cout << '\n';
    }
}