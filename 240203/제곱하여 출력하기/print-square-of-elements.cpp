#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[110];

    for(int i=0; i<n; i++){
        cin >> a[i];

        a[i]*=a[i];

        cout << a[i] << " ";
    }

    return 0;
}