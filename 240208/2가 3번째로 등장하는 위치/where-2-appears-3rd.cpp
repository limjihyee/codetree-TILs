#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int cnt = 0;
    for(int i=0; i<n; i++){
        if(a[i] ==2){
            cnt++;
        }

        if(cnt == 3){
            cout << i +1 << " ";
            break;
        }
    }

    return 0;
}