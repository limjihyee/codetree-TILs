#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n+n; i++){
        if(i%2==0){ // 짝수이면
            for(int j=0; j<-i/2+n; j++){
                cout << "* ";
            }
        }
        else{ // 홀수이면
            for(int j=0; j<(i+1)/2; j++){
                cout << "* ";
            }
        }
        cout << endl;
    }
    
    return 0;
}