#include <iostream>
using namespace std;
#include <string>

int main() {
    // 여기에 코드를 작성해주세요.
    string s, t;

    cin >> s >> t;

    int len, len2;

    len = s.length();
    len2 = t.length();

    if(1<=len<=100 && 1<=len2<=100){
        cout << t << endl << s;
    }
    return 0;
}