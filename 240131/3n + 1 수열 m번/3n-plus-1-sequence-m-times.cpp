#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m;

    for(int i=0; i<m; i++){
        cin >> n; // m개의 n 입력

        int cnt=0;

        while(n!=1){ // n이 1이 될 때까지 반복
            if(n%2==0){
                n/=2;
                cnt++;
            }
            else{
                n=3*n+1;
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}