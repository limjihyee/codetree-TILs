#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double n;

    cin >> n;

    if(0 <= n <= 50){
        cout << fixed;

        cout.precision(2);

        cout << n;

    }

    return 0;
}