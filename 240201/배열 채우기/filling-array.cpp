#include <iostream>
using namespace std;

int main() {
    int a[10];
    int cnt = 0;

    for(int i=0; i<10; i++){
        cin >> a[i];
        cnt++;
        if(a[i]==0){
            break;
        }
    }

    for(int i=cnt-2; i>=0; i--){
        cout << a[i] << " ";
    }

    return 0;
}