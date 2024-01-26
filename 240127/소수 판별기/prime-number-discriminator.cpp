#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;

    for(int i=2; i<1000; i++){
        if(i!=n){
            if(n%i==0){
                cnt++;
            }
        }
    }

    if(cnt>0){
        cout << "C";
    }
    else{
        cout << "P";
    }
    
    return 0;
}