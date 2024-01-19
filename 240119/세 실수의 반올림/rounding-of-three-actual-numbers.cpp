#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double a, b, c;

    cin >> a >> b >> c;

    if(1<=a<=100 && 1<=b<=100 && 1<=c<=100){
        cout << fixed;
        cout.precision(3);

        cout << a << endl << b << endl << c;
    }
    return 0;
}