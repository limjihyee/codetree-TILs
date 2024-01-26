#include <iostream>
using namespace std;

int main() {
    int n, i;
    cin >> n;

    int prod =1;

    for(i =1; i<=10; i++){
        prod *= i;
        if(prod >= n){
            break;
        }
    }
    cout << i;

    return 0;
}