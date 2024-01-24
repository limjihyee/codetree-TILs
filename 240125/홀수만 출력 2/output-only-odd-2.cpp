#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for(int i=a; i>=1; i-=2){
        cout << i << " ";
    }
    
    return 0;
}