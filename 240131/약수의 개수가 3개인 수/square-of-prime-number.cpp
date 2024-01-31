#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    int num = 0; // 약수가 3인 수의 수

    for (int i = start; i <= end; i++) {
        int cnt = 0; // 약수의 수
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) { // 약수의 개수 세기
                cnt++;
            }
        }

        if (cnt == 3) {
            num++;
        }
    }
    cout << num;

    return 0;
}