#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt =0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i%2==1){
                cnt++;
                cout << cnt << " ";
            }
            else{
                cnt+=2;
                cout << cnt << " ";
            }
        }
        cout << endl;
    }

    return 0;
}