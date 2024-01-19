#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    if(1 <= n <= 1000){
        cin >> n;

        cout << "Your score is " << n << " point.";
    }
    else cout << "다시 입력해주세요";
    return 0;
}