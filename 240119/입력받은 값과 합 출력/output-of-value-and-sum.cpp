#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;

    cin >> a >> b;

    if(1<=a<=100 && 1<=b<=100){
        cout << a << " " << b << " " << a+b;
    }
    return 0;
}