#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;

    cin >> T;
    /*
       여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
    */
    for (test_case = 1; test_case <= T; ++test_case)
    {
        int N, M; cin >> N >> M;

        vector<int> score(N);

        int temp;
        for (int i = 0; i < N; i++)
        {
            int cnt = 0;
            for (int j = 0; j < M; j++)
            {
                scanf("%d", &temp);
                if (temp == 1)
                    cnt++;
            }
            score[i] = cnt;
        }

        int max = *max_element(score.begin(), score.end());
        int grade = 0;

        for (int i = 0; i < N; i++)
            if (score[i] == max)
                grade++;

        printf("#%d %d %d\n", test_case, grade, max);
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}