#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){ // 나눠지는게 있으면 약수가 있음 (i값들이 n의 약수이다.)
            if(i!=n){
             sum += i;
            }
        }
    }

    if(n==sum){
        cout << 'P';
    }
    else{
        cout << 'N';
    }

    return 0;
}