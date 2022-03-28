#include<iostream>
#include<vector>
#include<cstring>

#define endl "\n"
#define MAX 8
using namespace std;

int N, M;
int MAP[MAX][MAX];
pair<int, int> Answer;
vector<pair<pair<int, int>, int>> V;

int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

void Initialize()
{
    memset(MAP, 0, sizeof(MAP));
    V.clear();
}

void Input()
{
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        int y, x, c;
        cin >> y >> x >> c;
        y--; x--;
        V.push_back(make_pair(make_pair(x, y), c));
    }
    MAP[N / 2][N / 2] = 2;
    MAP[(N / 2) - 1][(N / 2) - 1] = 2;
    MAP[(N / 2) - 1][N / 2] = 1;
    MAP[N / 2][(N / 2) - 1] = 1;
}

void Ocelo(int x, int y, int Color)
{
    MAP[x][y] = Color;

    for (int i = 0; i < 8; i++)
    {
        bool Flag = false;
        for (int k = 1; k < 8; k++)
        {
            int nx = x + dx[i] * k;
            int ny = y + dy[i] * k;

            if (nx < 0 || ny < 0 || nx >= N || ny >= N) break;
            if (MAP[nx][ny] == 0) break;
            if (MAP[nx][ny] == Color && Flag == false) break;

            if (MAP[nx][ny] != 0 && MAP[nx][ny] != Color) Flag = true;
            if (MAP[nx][ny] == Color)
            {
                while (1)
                {
                    if (nx == x && ny == y) break;
                    nx = nx - dx[i];
                    ny = ny - dy[i];
                    MAP[nx][ny] = Color;
                }
                break;
            }
        }
    }
}

bool Is_Full()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (MAP[i][j] == 0) return false;
        }
    }
    return true;
}

pair<int, int> Count()
{
    int Black, White;
    Black = White = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (MAP[i][j] == 1) Black++;
            else if (MAP[i][j] == 2) White++;
        }
    }
    return{ Black, White };
}

void Solution()
{
    for (int i = 0; i < V.size(); i++)
    {
        if (Is_Full() == true) break;

        int x = V[i].first.first;
        int y = V[i].first.second;
        int C = V[i].second;

        Ocelo(x, y, C);
    }
    Answer = Count();
}

void Solve()
{
    int Tc; cin >> Tc;
    for (int T = 1; T <= Tc; T++)
    {
        Initialize();
        Input();
        Solution();

        cout << "#" << T << " " << Answer.first << " " << Answer.second << endl;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("Input.txt", "r", stdin);
    Solve();

    return 0;
}
