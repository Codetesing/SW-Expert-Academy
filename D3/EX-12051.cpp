#include<iostream>
#define endl "\n"

using namespace std;

int gcd(long a, long b);

int main(int argc, char** argv)
{
    cin.tie();
    cout.tie();
    int test_case;
    int T;
    cin >> T;
    for (test_case = 1; test_case <= T; ++test_case)
    {
        bool isPossible = true;
        long n = 0;
        long P_D = 0;
        long P_G = 0;
        cin >> n >> P_D >> P_G;
        long dis = 0;
        dis = 100 * n * P_D;
        if (n < 100 / gcd(P_D, 100))//오늘 한 횟수가 정수가 아니다.
        //if(dis-(int)dis!=0)
            isPossible = false;
        if (P_D < 100 && P_G == 100) //오늘의 승률이 100인데 전체의 승률이 100일 경우
            isPossible = false;
        if (P_D > 0 && P_G == 0)
            isPossible = false;

        cout << "#" << test_case << " " << ((isPossible) ? "Possible" : "Broken") << endl;

    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

int gcd(long a, long b) {
    while (b) {
        long r = a % b;
        a = b;
        b = r;
    }
    return a;
}