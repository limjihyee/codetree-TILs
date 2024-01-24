#include <iostream>
using namespace std;

int main() {
    char a, b, c; //  감기증상 유무
    int a1, b1, c1; // 체온

    cin >> a >> a1;
    cin >> b >> b1;
    cin >> c >> c1;

    int cnt=0;

    if(a=='Y'){
        if(a1>=37){ // A 경우
            cnt++;
        }
    }

    if(b=='Y'){
        if(b1>=37){ // A 경우
            cnt++;
        }
    }

    if(c=='Y'){
        if(c1>=37){ // A 경우
            cnt++;
        }
    }

    if(cnt>=2){
        cout << 'E';
    }
    else cout << 'N';

    return 0;
}