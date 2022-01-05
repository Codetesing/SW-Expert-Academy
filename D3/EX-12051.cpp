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
        if (n < 100 / gcd(P_D, 100))//���� �� Ƚ���� ������ �ƴϴ�.
        //if(dis-(int)dis!=0)
            isPossible = false;
        if (P_D < 100 && P_G == 100) //������ �·��� 100�ε� ��ü�� �·��� 100�� ���
            isPossible = false;
        if (P_D > 0 && P_G == 0)
            isPossible = false;

        cout << "#" << test_case << " " << ((isPossible) ? "Possible" : "Broken") << endl;

    }
    return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}

int gcd(long a, long b) {
    while (b) {
        long r = a % b;
        a = b;
        b = r;
    }
    return a;
}