#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n; // 한변의 길이

    cin >> n;
    
    if(n<5){
        cout << n*n << endl << "tiny";
    }
    else cout << n*n;

    return 0;
}