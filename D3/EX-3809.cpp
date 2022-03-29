#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    for (int tc = 1; tc <= t; tc++)
    {
        int n;
        vector<string> v;
        bool check = true;
        string s = "";

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            s += to_string(tmp);
        }

        for (int i = 1; i <= s.size(); i++)
        {
            for (int j = 0; j < s.size(); j++)
            {
                string tmp = s.substr(j, i);
                v.push_back(tmp);
            }
            for (int j = pow(10, i - 1) - 1; j < pow(10, i); j++)
            {
                if (find(v.begin(), v.end(), to_string(j)) == v.end())
                {
                    cout << "#" << tc << " " << j << endl;
                    check = false;
                    break;
                }
            }
            if (!check)
                break;
        }
    }
    return 0;
}