#include <iostream>
using namespace std;

int main() {
    
    int sum=0;

    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        int k;
        cin >> k;

        if(k%2==1 && k%3==0){
            sum+=k;
        }
    }
    cout << sum;
    
    return 0;
}