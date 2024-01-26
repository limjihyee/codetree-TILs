#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;

    for(int i=2; i<1000; i++){  // 1000 말고 n으로 해도 됨 (약수를 구하는 거니까 n보다 클 수는 없음)
        if(i!=n){
            if(n%i==0){
                cnt++;
            }
        }
    }

    if(cnt>0){
        cout << "C";
    }
    else{
        cout << "P";
    }

    return 0;
}