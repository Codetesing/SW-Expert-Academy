#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;
    cin >> T;

    for (test_case = 1; test_case <= T; ++test_case)
    {
        string str; cin >> str;
        int cnt[27] = { 0, };
        for (int i = 0; i < str.size(); i++) {
            cnt[str[i] - 97]++;
        }

        string ans = "";
        for (int i = 0; i < 26; i++) {
            if (cnt[i] % 2 != 0) ans += (i + 97);
        }
        if (ans.empty()) ans = "Good";
        cout << "#" << test_case << " " << ans << "\n";
    }
    return 0;
}