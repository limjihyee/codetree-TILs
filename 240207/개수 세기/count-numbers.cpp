#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[100];

    // 입력
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int cnt=0;
    for(int i=0; i<n; i++){
        if(a[i]==m){
            cnt++;
        }
    }
 
    cout << cnt;
    
    return 0;
}