#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        int cnt = 0; // 약수의 개수

        for(int j=1; j<=i; j++){
            if(i%j==0){ // 나눠지는 거 있으면 약수의 수로 판단
                cnt++;
            }
        }

        if(cnt==2){ // 약수의 수가 2개(1, 자기자신) == 소수
            cout << i << " ";
        }
    }
    return 0;
}