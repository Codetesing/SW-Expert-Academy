#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int testcase;
    cin >> testcase;
    for (int test = 1; test <= testcase; test++) {
        int n;
        cin >> n;
        int num1 = n / 100;
        int num2 = n % 100;
        bool flag1 = false;
        bool flag2 = false;
        cout << "#" << test << " ";
        if (num1 > 12 || num1 == 0)
            flag1 = true;
        if (num2 > 12 || num2 == 0)
            flag2 = true;
        if (flag1 && flag2)
            cout << "NA\n";
        else if (flag1)
            cout << "YYMM\n";
        else if (flag2)
            cout << "MMYY\n";
        else
            cout << "AMBIGUOUS\n";

    }
}