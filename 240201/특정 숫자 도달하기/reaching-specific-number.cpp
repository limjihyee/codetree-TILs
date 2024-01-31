#include <iostream>
using namespace std;

int main() {
    int a[10];

    for(int i=0; i<10; i++){
        cin >> a[i];
    }

    int sum=0;
    int cnt=0;

    int i =0;
    while(a[i]<250){
        cnt++;
        sum += a[i];
        i++;
    }

    cout << sum << " " << (float)sum/cnt;

    return 0;
}