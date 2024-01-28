#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=n; j>i; j--){
            cout << "  ";
        }
        for(int k=n; k>=n+1-(2*i-1); k--){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}