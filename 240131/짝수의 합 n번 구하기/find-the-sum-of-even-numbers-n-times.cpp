#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;

        int sum = 0; // a, b 바뀔 때마다 새로 정의되어야 돼(for 밖에 하면 누적돼서 안에 선언)

        for(int j=a; j<=b; j++){
            if(j%2==0){ // 짝수의 합
                sum += j; 
            }
        }
        cout << sum << endl;
    }
    
    return 0;
}