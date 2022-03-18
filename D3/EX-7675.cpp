#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tc;
    cin >> tc;
    for (int test = 1; test <= tc; test++) {
        int n;
        cin >> n;
        cout << '#' << test << ' ';
        for (int i = 0; i < n; i++) {
            int ans = 0;
            string s;
            do {
                cin >> s;
                if (s[0] >= 'A' && s[0] <= 'Z') {
                    bool flag = false;
                    if (s[s.size() - 1] == '!' || s[s.size() - 1] == '?' || s[s.size() - 1] == '.') {
                        if (s.size() == 2)ans++;
                        else {
                            for (int i = 1; i < s.size() - 1; i++) {
                                if (s[i] >= 'a' && s[i] <= 'z')continue;
                                flag = true;
                                break;
                            }
                        }
                    }
                    else {
                        for (int i = 1; i < s.size(); i++) {
                            if (s[i] >= 'a' && s[i] <= 'z')continue;
                            flag = true;
                            break;
                        }
                    }
                    if (!flag)ans++;
                }
            } while (s[s.size() - 1] != '!' && s[s.size() - 1] != '?' && s[s.size() - 1] != '.');
            cout << ans << ' ';
        }
        cout << '\n';

    }
    return 0;
}