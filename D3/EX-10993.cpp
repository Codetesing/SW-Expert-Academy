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
       아래의 freopen 함수는 input.txt 를 read only 형식으로 연 후,
       앞으로 표준 입력(키보드) 대신 input.txt 파일로부터 읽어오겠다는 의미의 코드입니다.
       //여러분이 작성한 코드를 테스트 할 때, 편의를 위해서 input.txt에 입력을 저장한 후,
       freopen 함수를 이용하면 이후 cin 을 수행할 때 표준 입력 대신 파일로부터 입력을 받아올 수 있습니다.
       따라서 테스트를 수행할 때에는 아래 주석을 지우고 이 함수를 사용하셔도 좋습니다.
       freopen 함수를 사용하기 위해서는 #include <cstdio>, 혹은 #include <stdio.h> 가 필요합니다.
       단, 채점을 위해 코드를 제출하실 때에는 반드시 freopen 함수를 지우거나 주석 처리 하셔야 합니다.
    */
    //freopen("input.txt", "r", stdin);
    cin >> T;
    /*
       여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
    */
    for (test_case = 1; test_case <= T; ++test_case)
    {

        /////////////////////////////////////////////////////////////////////////////////////////////
        /*
             이 부분에 여러분의 알고리즘 구현이 들어갑니다.
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
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}