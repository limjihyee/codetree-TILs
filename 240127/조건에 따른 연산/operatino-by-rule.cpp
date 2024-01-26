#include <iostream>
using namespace std;

int main() {
    int cnt=0;
    int n;
    cin >> n;

    for(;;){
        if(n<1000){
            if(n%2==0){
                n=n*3 +1;
            }
            else{
                n=n*2 +2;
            }
            cnt++;
        }
        else{
            break;
        }
    }

    cout << cnt;

    return 0;
}