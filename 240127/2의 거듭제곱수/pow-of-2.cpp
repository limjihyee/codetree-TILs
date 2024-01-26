#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt=0;
    int k =1;

    for(;;){
        k*=2;
        cnt++;

        if(n==k){
            break;
        }
    }
    cout << cnt;

    return 0;
}