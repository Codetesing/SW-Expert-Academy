
#include <string>

#include <iostream>
using namespace std;

int m[128];

void init()
{
    for (int i = 0; i < 26; i++)
        m['A' + i] = i;
    for (int i = 0; i < 26; i++)
        m['a' + i] = 26 + i;
    for (int i = 0; i < 11; i++)
        m['0' + i] = 52 + i;

    m['+'] = 62;
    m['/'] = 63;
}

void decode(char* src, char* dst)
{
    int bits, pos = 0, pos2 = 0;

    while (src[pos])
    {
        bits = m[src[pos++]] << 18;
        bits += m[src[pos++]] << 12;
        bits += m[src[pos++]] << 6;
        bits += m[src[pos++]];

        dst[pos2++] = bits >> 16 & 0xFF;
        dst[pos2++] = bits >> 8 & 0xFF;
        dst[pos2++] = bits & 0xFF;
    }
    dst[pos2] = 0;
}

int main()
{
    init();

    int T;
    cin >> T;

    char encoded[100000];
    char decoded[100000];

    for (int tc = 1; tc <= T; tc++)
    {
        cin >> encoded;
        decode(encoded, decoded);
        printf("#%d %s \n", tc, decoded);
    }

    return 0;
}