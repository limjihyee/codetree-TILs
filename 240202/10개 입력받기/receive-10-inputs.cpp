#include <iostream>
using namespace std;

int main() {
    
    int a[10];
    
    int cnt=0;
    int sum=0;

    for(int i=0; i<10; i++){
        cin >> a[i];

        if(a[i]==0){ // 0일 떄, for문 탈출
            break;
        }
        cnt++;
        sum += a[i];
    }

    cout << fixed;
    cout.precision(1);

    cout << sum << " " <<  (float)sum/cnt;
    
    return 0;
}