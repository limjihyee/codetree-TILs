#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=1+i; j>0; j--){
            cout << n-j+1 << " ";
        }
        cout << endl;
    }

    return 0;
}