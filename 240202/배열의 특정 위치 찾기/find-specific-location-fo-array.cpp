#include <iostream>
using namespace std;

int main() {
    int a[10];

    for(int i=0; i<10; i++){
        cin >> a[i];
    }

    //짝수 번째 입력된 값의 합
    int sum = 0;

    for(int i=1; i<10; i+=2){
        sum += a[i];
    }

    // 3의 배수 번째로 입력된 값
    int sum2 = 0;
    int cnt = 0;

    for(int i=2; i<10; i+=3){
        sum2 += a[i];
        cnt++;
    }

    cout << fixed;
    cout.precision(1);

    cout << sum << " " << (float)sum2/cnt;
    return 0;
}