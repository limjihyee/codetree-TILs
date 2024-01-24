#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=n; i<=5 * n; i+=7){
        cout << i << " ";
    }

    return 0;
}