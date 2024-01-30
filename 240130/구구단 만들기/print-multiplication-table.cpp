#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int k=b;
    for(int i=1; i<=9; i++){
        for(int j=k; j>=a; j-=2){
            cout << j << " * " << i << " = " << j*i;

            if(j>a){
                cout << " / ";
            }
        }
        cout << endl;
    }

    return 0;
}