#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
 
    int len, len2;
    cin >> len;
    for (int l = 1; l <= len; l++) {
        //���Ƚ����ŭ �ݺ�
        cin >> len2;
        //���� ����Ʈ, �̵��ѰŸ�, ���ӵ�, ��ɳѹ�(0����, 1����, 2����)
        int now_speed = 0, distance = 0, speed = 0, num = 0;
        for (int l2 = 0; l2 < len2; l2++) {
            cin >> num;
            //0�ϰ�� ����
            if (!num) {}
            //1�ϰ�� ����
            else if (num & 1) {
                cin >> speed;
                now_speed += speed;
            }
            //2�ϰ�� ����
            else {
                cin >> speed;
                now_speed -= speed;
                //�ӵ��� 0���� �۾����� 0���� ����
                if (now_speed < 0)
                    now_speed = 0;
            }
            //�Ÿ��� �̵��ӵ� ���ϱ�
            distance += now_speed;
        }
        cout << "#" << l << " " << distance << endl;
    }
    return 0;
}