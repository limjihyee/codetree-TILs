#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n+n; i++){
        if(i%2==1){ //i가 홀수이면
            for(int j=0; j<n-(i-1)/2; j++){
                cout << "* ";
            }
        }
        else{ // i가 짝수이면
            for(int j=0; j<1+(i/2); j++){
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}