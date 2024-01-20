#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int h, m;

    cin>>h;
    cin.get();
    cin>>m;

    if(1<=h<=22){
        cout << h + 1 << ":";
        if(0<=m<60){
            cout << m;
        }
    }
    return 0;
}