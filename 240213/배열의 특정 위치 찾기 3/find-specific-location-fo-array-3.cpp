#include <iostream>
using namespace std;

int main() {
    int a[300];

    int i=0;
    while(1){
        cin >> a[i];

        if(a[i] == 0){
            break;
        }
        i++;
    }

    int sum = 0;
    sum = a[i-1] + a[i-2] + a[i-3];
    cout << sum;
    
    return 0;
}