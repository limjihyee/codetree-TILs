#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int k=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){ // Z는 90, A가 65
            cout << (char)(65+k);

            if(k==25){
                k=0;
            }
            else{
                k++;
            }
        }
        cout << endl;
    }

    return 0;
}