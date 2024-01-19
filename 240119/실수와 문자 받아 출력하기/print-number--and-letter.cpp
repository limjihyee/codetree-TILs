#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    double a, b;

    cin >> c >> a >> b;

    if(1<=a<=1000 && 1<=b<=1000){
        cout << fixed;
        cout.precision(2);

        cout << c << endl << a << endl << b;
    }
    return 0;
}