#include <iostream>
using namespace std;

int main() {
    int a[4][4];

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> a[i][j];
        }
    }

    for(int i=0; i<4; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            sum += a[i][j];
        }
        cout << sum << endl;
    }
    
    return 0;
}