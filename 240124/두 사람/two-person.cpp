#include <iostream>
using namespace std;

int main() {
    int a, b;
    char a1, b1;

    cin >> a >> a1;
    cin >> b >> b1;

    if((a>=19 && a1== 'M')|| (b>=19 && b1 == 'M')){
        cout << 1;
    }
    else cout << 0;

    return 0;
}