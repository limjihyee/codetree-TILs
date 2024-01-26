#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n%2==0 || n%3==0){
        cout << "C";
    }
    else if(n==2 || n==3){
        cout << "P";
    }
    else cout << "P";

    return 0;
}