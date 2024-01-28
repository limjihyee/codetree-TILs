#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++){ // 증가하는 공백
        for(int k=0; k<-i+n-1; k++){
            cout << "  ";
        }
        for(int j=0; j<i+1; j++){ //증가하는 @
            cout << "@ ";
        }
        cout << endl;
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<-i+n-1; j++){ // 감소하는 @
            cout << "@ ";
        }
        cout << endl;
    }

    return 0;
}