#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int k=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << (char)(65+k);
            k++;
        }
        cout << endl;
    }

    return 0;
}