#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int k=11;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
                cout << k << " ";
                k+=2;
            }
        cout << endl;
        k=k-2*(n-1);
        }

    return 0;
}