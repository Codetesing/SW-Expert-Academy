#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        string temp;
        cin >> temp;
        int smallest = stoi(temp), biggest = stoi(temp);

        for (int i = 0; i < temp.length() - 1; i++)
        {
            for (int j = i + 1; j < temp.length(); j++) {
                string _temp = temp;
                swap(_temp[i], _temp[j]);
                if (_temp.front() != '0' && (smallest > stoi(_temp))) smallest = stoi(_temp);
                else if (biggest < stoi(_temp))  biggest = stoi(_temp);
            }
        }


        printf("#%d %d %d\n", t, smallest, biggest);
    }
}