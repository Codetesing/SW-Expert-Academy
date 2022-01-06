#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

struct city {
    int x;
    int y;
    int s;
    int p;
    vector<pair<double, int>> f;
};

int main(int argc, char** argv)
{
    int test_case;
    int T;
    /*
       �Ʒ��� freopen �Լ��� input.txt �� read only �������� �� ��,
       ������ ǥ�� �Է�(Ű����) ��� input.txt ���Ϸκ��� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
       //�������� �ۼ��� �ڵ带 �׽�Ʈ �� ��, ���Ǹ� ���ؼ� input.txt�� �Է��� ������ ��,
       freopen �Լ��� �̿��ϸ� ���� cin �� ������ �� ǥ�� �Է� ��� ���Ϸκ��� �Է��� �޾ƿ� �� �ֽ��ϴ�.
       ���� �׽�Ʈ�� ������ ������ �Ʒ� �ּ��� ����� �� �Լ��� ����ϼŵ� �����ϴ�.
       freopen �Լ��� ����ϱ� ���ؼ��� #include <cstdio>, Ȥ�� #include <stdio.h> �� �ʿ��մϴ�.
       ��, ä���� ���� �ڵ带 �����Ͻ� ������ �ݵ�� freopen �Լ��� ����ų� �ּ� ó�� �ϼž� �մϴ�.
    */
    //freopen("input.txt", "r", stdin);
    cin >> T;
    /*
       ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
    */
    for (test_case = 1; test_case <= T; ++test_case)
    {

        /////////////////////////////////////////////////////////////////////////////////////////////
        /*
             �� �κп� �������� �˰��� ������ ���ϴ�.
         */
         /////////////////////////////////////////////////////////////////////////////////////////////
        int n;
        cin >> n;

        vector<city> cities(n);
        for (int i = 0; i < n; i++)
            cin >> cities[i].x >> cities[i].y >> cities[i].s;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j)
                    continue;

                double i2j = (double)cities[i].s / (double)(pow((cities[i].x - cities[j].x), 2) + pow((cities[i].y - cities[j].y), 2));
                if (i2j > (double)cities[j].s)
                    cities[j].f.push_back(pair<double, int>(i2j, i));
            }
        }

        for (int i = 0; i < n; i++) {
            if (cities[i].f.size() == 0)          cities[i].p = -2;
            else if (cities[i].f.size() == 1)    cities[i].p = cities[i].f[0].second;
            else {
                pair<double, int> empowered = cities[i].f[0];
                int cnt = 1;
                for (int j = 1; j < cities[i].f.size(); j++) {
                    if (empowered.first == cities[i].f[j].first)
                        cnt++;
                    else if (empowered.first < cities[i].f[j].first) {
                        empowered = cities[i].f[j];
                        cnt = 1;
                    }
                }

                if (cnt == 1)
                    cities[i].p = empowered.second;
                else
                    cities[i].p = -1;
            }
        }

        cout << '#' << test_case << ' ';
        for (int i = 0; i < n; i++) {
            if (cities[i].p == -2)
                cout << 'K' << ' ';
            else if (cities[i].p == -1)
                cout << 'D' << ' ';
            else {
                int id = cities[i].p;
                while (cities[id].p >= 0)
                    id = cities[id].p;
                cout << id + 1 << ' ';
            }
        }
        cout << '\n';
    }
    return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}