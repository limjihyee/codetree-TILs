#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int k=0; k<-i+n-1; k++){ // 증가하는 공백
            cout << " ";
        }
        for(int j=0; j<2*i+1; j++){ // 증가하는 별
            cout << "*";
        }
        cout << endl;
    }

    for(int i=0; i<n-1; i++){
        for(int k=0; k<i+1; k++){ // 감소하는 공백
            cout << " ";
        }
        for(int j=0; j<-2*i+(2*n-3); j++){ // 감소하는 별
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}