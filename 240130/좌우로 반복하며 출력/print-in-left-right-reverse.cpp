#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        if(i%2==0){ // 짝수 행에서
            for(int j=0; j<n; j++){
                cout << j+1;
            }
        }
        else{//홀수행에서
            for(int j=n; j>0; j--){
                cout << j;
            }
        }
        cout << endl;
    }
    
    return 0;
}