#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j%2==1){ // j가 홀수이면
                cout << n-(i+1)+1;
            }
            else{
                cout << i+1;
            }
        }
        cout << endl;
    }

    return 0;
}