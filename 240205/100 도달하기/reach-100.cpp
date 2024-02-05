#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100] = {1, n};

    int i = 2;
    int cnt = 0;
    while(1){
        a[i] = a[i-1] + a[i-2];
        
        if(a[i] >100){
            break;
        }
        i++;
        cnt++;
    }

    for(int j=0; j<=cnt+2; j++){
        cout << a[j] << " ";
    }

    return 0;
}