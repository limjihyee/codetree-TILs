#include <iostream>
using namespace std;

int main() {
    int a[10];

    int cnt = 0;

    for(int i=0; i<10; i++){
        cin >> a[i];

        if(a[i] == 0){
            break;
        }
        cnt++;
    }

    int cnt2 = 0;
    int sum = 0;

    for(int i=0; i<cnt; i++){
        if(a[i] % 2 ==0){
            cnt2++; // 2의 배수의 개수
            sum += a[i];
        }
    }

    cout << cnt2 << " " << sum;
    
    return 0;
}