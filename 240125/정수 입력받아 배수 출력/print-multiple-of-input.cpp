#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k=2;

    for(int i=n; i<=5 * n; i+=7){
        cout << i << " ";
        k++;
    }

    return 0;
}