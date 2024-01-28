#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=i; j>0; j--){ // 공백
            cout << "  ";
        }
        for(int k=-2*i+(2*n-1); k>0; k--){ // 감소하는 별
            cout << "* ";
        }
       
        cout << endl;
    }

    for(int i=0; i<n-1; i++){
        for(int j=n-2-i; j>0; j--){ // 감소하는 공백
            cout << "  ";
        }
        for(int l=0; l<2*i+3; l++){ // 증가하는 별
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}