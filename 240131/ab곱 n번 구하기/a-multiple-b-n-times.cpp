#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        int a,b;
        cin >> a >> b;

        int sub=1;

        for(int j=a; j<=b; j++){
            sub*=j;
        }
        cout << sub << endl;
    }

    return 0;
}