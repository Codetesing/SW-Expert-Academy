#include<iostream>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    for (int t = 1; t <= 10; t++)
    {
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        int e; cin >> e;
        for (int i = 0; i < e; i++)
        {
            char mode; cin >> mode;
            int x, y; cin >> x >> y;
            if (mode == 'I')
            {
                int s[100];
                for (int j = 0; j < y; j++)
                    cin >> s[j];

                for (int j = y - 1; j >= 0; j--)
                    v.insert(v.begin() + x, s[j]);
            }
        }

        printf("#%d ", t);
        for (int i = 0; i < 10; i++)
            printf("%d ", v[i]);
        printf("\n");
    }
    return 0;
}