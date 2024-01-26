#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n; // n개의 정수
    
    for(int i=1; i<=n; i++){
        int k;
        cin >> k;

        if(k%2==1 && k%3==0){
            cout << k << endl;
        }
    }

    return 0;
}