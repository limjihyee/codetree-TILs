#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int k=0; k<2; k++){
        for(int j=0; j<n; j++){
            for(int i=0; i<n; i++){
                cout << "*";
                }
            cout << endl;
            }
        cout << endl;
    }
    return 0;
}