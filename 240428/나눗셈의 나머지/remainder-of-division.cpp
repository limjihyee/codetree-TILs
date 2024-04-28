#include <iostream>
using namespace std;

int main() {
    int a, b, i, sum2;
    int arr[100] = {0}; // 각 나머지의 등장 횟수를 저장할 배열
    sum2 = 0;
    i = 0;

    cin >> a >> b;

    while(a > b)
    {
        int remainder = a % b;
        arr[remainder]++; // 나머지의 등장 횟수 증가
        a /= b; // 몫으로 갱신
    }

    // 각 나머지의 등장 횟수를 제곱하여 합산
    for(i=0; i<=9; i++){
        sum2 += arr[i] * arr[i];
    }

    cout << sum2;

    return 0;
}