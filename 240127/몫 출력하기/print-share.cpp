#include <iostream>
using namespace std;

int main() {

    int cnt = 0;
    
    for(;;){
        int k;
        cin >> k;

        if(k%2==0){
            cout << k/2 << endl;
        }
        cnt++;
        
        if(cnt>3){
            break;
        }
    }
    return 0;
}