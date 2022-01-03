#include <iostream>

using namespace std;

int main(void) {
    int T, N;
    cin >> T;

    for (int t_case = 0; t_case < T; t_case++) {
        cin >> N;
        char *c = new char[N];
        int *k = new int[N];

        for (int i = 0; i < N; i++) {
            cin >> c[i];
            cin >> k[i];
        }

        cout << "#" << t_case + 1 << "\n";
        int cutLine = 0;
        for (int i = 0; i < N; i++) {
            while (k[i] != 0) {
                cout << c[i];
                k[i]--;
                if (cutLine++ == 9) {
                    cout << "\n";
                    cutLine = 0;
                }
            }
        }
        cout << "\n";
    }

    return 0;
}
