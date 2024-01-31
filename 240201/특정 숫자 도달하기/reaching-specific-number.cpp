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

	// for(int i = 0; i < 10; i++) {
    //     if(a[i] >= 250) 
	// 		break;     // 250 이상이 되면 break로 for문 탈출
    //     sum += a[i];
    //     cnt++;
    // }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (float)sum/cnt;

    return 0;
}