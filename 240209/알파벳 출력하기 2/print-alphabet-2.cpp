#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int l = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){ // 공백
            cout << "  ";
        }
        for(int k=0; k<n-i; k++){
            cout << (char)(65+l) << " ";

            if(l==25){
                k=0;
            }
            else{
                l++;
            }
        }
        cout << endl;
    }

    return 0;
}