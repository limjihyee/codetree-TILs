#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int cnt = 0;
    for(int i=a; i<=b; i++){
        if(1920%i==0 && 2880%i==0){ //공약수 존재하지 -> 공통으로 나누어 떨어지는 i
            cnt++;
        }
    }

    if(cnt>0){
        cout << 1;
    }
    else{
        cout << 0;
    }

    return 0;
}