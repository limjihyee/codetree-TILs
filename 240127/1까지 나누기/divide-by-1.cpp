#include <iostream>
using namespace std;

int main() {
    int n, i;
    cin >> n;

    for(i=1; i<1000; i++){
        n/=i;
        if(n <=1 ){
            break;
        }
    }
    
    cout << i;

    return 0;
}