#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int cnt=0;

    for(int i=a; i<=b; i++){
        if(i%c==0){ // c의 배수가 있다면
            cnt++;
        }
    }

    if(cnt>0){
        cout << "NO";
    }
    else{
        cout << "YES";
    }

    return 0;
}