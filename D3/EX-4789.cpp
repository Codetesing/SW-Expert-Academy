
#include<iostream>
#include<cstring>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
        string s;
        int sum = 0, ans = 0;

        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            int num = s[i] - '0';

            if (num > 0)
            {
                if (sum >= i)
                    sum += num;
                else
                {
                    ans += (i - sum);
                    sum = i + num;
                }
            }
        }

		printf("#%d %d\n", test_case, ans);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}