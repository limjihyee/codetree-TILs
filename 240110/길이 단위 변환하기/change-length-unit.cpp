#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double a = 30.48;
    double b = 160934;

    cout << fixed;
    cout.precision(1);

    cout << "9.2ft = " << 9.2*a << "cm" << endl;
    cout << "1.3mi = " << 1.3*b << "cm";

    return 0;
}