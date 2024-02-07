#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];

    // 입력
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    //최솟값
    int min = a[0];

    for(int i=1; i<n; i++){
        if(min > a[i]){ // 더 작으면 min 갱신
            min = a[i];
        }
    }

    cout << min << " ";

    // 최솟값을 갖는 원소의 개수
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(min == a[i]){ // 최솟값과 같은 값이 배열 안에 몇 개 존재
            cnt++;
        }
    }

    cout << cnt;
    
    return 0;
}