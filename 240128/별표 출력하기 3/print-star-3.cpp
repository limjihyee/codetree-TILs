#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=n; j>n-i; j--){
            cout << "  ";
        }
        for(int k=n+(3-i); k>=i; k--){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}