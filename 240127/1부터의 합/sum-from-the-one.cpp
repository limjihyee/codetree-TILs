#include <iostream>
using namespace std;

int main() {
    int n, i;
    cin >> n;

    int sum = 0;

    for(i=1; i<=100; i++){
        sum+=i;
        if(sum>=n){ // 처음으로 합이 n 이상이 되는 순간
            break; // for문 탈출
        }
    }
    cout << i; // 그떄 더해졌던 숫자 i

    return 0;
}