#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double a;
    cin >> a;

    if(0<=a<=100){
        cout << fixed;

        cout.precision(1);

        cout << a*30.48;
    }
    return 0;
}