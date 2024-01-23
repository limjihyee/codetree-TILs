#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int d;
    if(a<=b && a<=c){ // a가 제일 작을 경우
        d = a;
    }
    else if(b<=a && b<=c){ // b가 제일 작을 경우
        d = b;
    }
    else if(c<=a && c<=b) {
        d = c;
    }

    if(a==d){
        cout << 1 << " ";
    }
    else cout << 0 << " ";

    if(a==b && a==c){
        cout << 1;
    }
    else cout << 0;

    return 0;
}