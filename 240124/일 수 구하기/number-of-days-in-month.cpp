#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    //4.6.9.11만 30, 나머지 31

    if(n==4 || n==6 || n==9 || n==11){
        cout << 30;
    }
    else if(n==2){
        cout << 28;
    }
    else cout << 31;

    return 0;
}