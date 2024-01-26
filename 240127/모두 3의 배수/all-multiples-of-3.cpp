#include <iostream>
using namespace std;

int main() {

    int cnt = 0;

    for(int i=1; i<=5; i++){
        int k;
        cin >> k;

        if(k%3==0){
            cnt++;
        }
    }

    if(cnt==5){
        cout << 1;
    }
    else cout << 0;

    return 0;
}