#include <iostream>
using namespace std;

int main() {
    int a[10];

    for(int i=0; i<10; i++){ // 10개의 정수 주어짐
        cin >> a[i];
    }

    int max = a[0];

    for(int i=1; i<10; i++){
        if(a[i] > max){ // 더 크면 max 갱신
            max = a[i];
        }
    }

    cout << max;
    
    return 0;
}