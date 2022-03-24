#include <iostream>
#include <cmath>
#include <string>
using namespace std;
string ans;

void run(int a, int b, int c, int d, string numList) {
    if (ans != "") return;
    if (abs(b - c) > 1) return;
    if (a < 0 || b < 0 || c < 0 || d < 0) return;
    if (a == 0 && b == 0 && c == 0 && d == 0) {
        ans = numList;
        return;
    }

    if (numList.back() == '0') {
        run(a - 1, b, c, d, numList + "0");
        run(a, b - 1, c, d, numList + "1");
    }
    else {
        run(a, b, c - 1, d, numList + "0");
        run(a, b, c, d - 1, numList + "1");
    }
}
int main() {
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        ans = "";
        run(a, b, c, d, ans + "0");
        run(a, b, c, d, ans + "1");

        if (ans == "") {
            printf("#%d impossible\n", tc);
        }
        else {
            printf("#%d %s\n", tc, ans.c_str());
        }
    }
    return 0;
}