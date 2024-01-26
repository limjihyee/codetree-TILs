#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt=0;

    for(;;){
        if(n==1){
            break;
        }
        else{
            if(n%2==0){
                n/=2;
            }
            else{
                n = n*3 + 1;
            }
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}