#include <iostream>
using namespace std;

int main() {
    int a[10];

    for(int i=0; i<10; i++){
        cin >> a[i];
    }

    // 홀수 번째 입력받은 정수의 합
    int sum = 0;
    for(int i=0; i<10; i+=2){
        sum += a[i];
    }

    // 짝수 번째 입력받은 정수의 합
    int sum2 = 0;
    for(int i=1; i<10; i+=2){
        sum2 += a[i];
    }

    if(sum > sum2){
        cout << sum-sum2;
    }
    else
        cout << sum2-sum;
        
    return 0;
}