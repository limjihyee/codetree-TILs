#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int max = a[0];
    int maxPoint = 0; // 최대 위치

    for(int i=0; i<n; i++){
        if(max < a[i]){
            max = a[i];
            maxPoint = i; // 최대 위치 갱신
        }
    }

    int max2 = a[0];
    for(int i=0; i<n; i++){
        if(i == maxPoint){
            continue;
        }
        else if(a[i] > max2){
            max2 = a[i];
        }
    }

    cout << max << " " << max2;
    
    return 0;
}