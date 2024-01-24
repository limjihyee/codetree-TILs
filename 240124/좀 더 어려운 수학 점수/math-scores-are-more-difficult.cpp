#include <iostream>
using namespace std;

int main() {
    int am, ae;
    int bm, be;

    cin >> am >> ae;
    cin >> bm >> be;

    if(am > bm){
        cout << 'A';
    }
    else if(bm > am){
        cout << 'B';
    }
    else if(am == bm && ae > be){
        cout << 'A';
    }
    else if(am == bm && be > ae){
        cout << 'B';
    }
    
    return 0;
}