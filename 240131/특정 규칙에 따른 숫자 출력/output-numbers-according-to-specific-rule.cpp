#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << "  ";
        }
        
        for(int j=0; j<-i+n; j++){
            if(cnt<=8){
                cnt++;
            }
            else{
                cnt=1;
            }
            cout << cnt << " ";
        }
        cout << endl;
    }

    return 0;
}