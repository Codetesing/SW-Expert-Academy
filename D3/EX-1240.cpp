#include <iostream>
#include <stdio.h>

using namespace std;

int code[10][7] = {
    {0,0,0,1,1,0,1}, 
    {0,0,1,1,0,0,1}, 
    {0,0,1,0,0,1,1}, 
    {0,1,1,1,1,0,1}, 
    {0,1,0,0,0,1,1}, 
    {0,1,1,0,0,0,1}, 
    {0,1,0,1,1,1,1}, 
    {0,1,1,1,0,1,1}, 
    {0,1,1,0,1,1,1}, 
    {0,0,0,1,0,1,1}  
};

int N, M;
int arr[50][100];
int codeBit[56];
int codeNum[8];
int res;

int main() {

    int test_case;
    int T;

    cin >> T;

    for (test_case = 1; test_case <= T; test_case++) {

        res = 0;

        cin >> N >> M;
        for (int i = 0; i < N; i++) 
            for (int j = 0; j < M; j++)
                scanf("%1d", &arr[i][j]);

        bool codeFind = false;
        for (int i = 0; i < N; i++) 
        {
            for (int j = M - 1; j >= 0; j--) 
                if (arr[i][j] == 1) 
                {
                    codeFind = true;
                    
                    for (int k = 0; k < 56; k++)
                        codeBit[k] = arr[i][j - 55 + k];

                    break;
                }
            if (codeFind)
                break;
        }

        for (int i = 0; i < 8; i++)
            for (int k = 0; k < 10; k++) 
            {
                bool isSame = true;

                for (int j = 0; j < 7; j++)
                    if (codeBit[(i * 7) + j] != code[k][j]) 
                    {
                        isSame = false;
                        break;
                    }

                if (isSame) 
                {
                    codeNum[i] = k;
                    break;
                }
            }
        int sum = (codeNum[0] + codeNum[2] + codeNum[4] + codeNum[6]) * 3 + codeNum[1] + codeNum[3] + codeNum[5] + codeNum[7];

        if (sum % 10 == 0) 
            for (int i = 0; i < 8; i++)
                res += codeNum[i];

        cout << "#" << test_case << " " << res << "\n";
    }
}