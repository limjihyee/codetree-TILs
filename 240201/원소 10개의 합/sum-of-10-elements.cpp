#include <iostream>
using namespace std;

int main() {
    int arr[10];

    int sum=0;
    for(int i=0; i<10; i++){
        cin >> arr[i];
        sum+=arr[i];
    }

    cout << sum;


    // 배열 이용하지 않는 경우

    // int sum=0;
    // int a;

    // for(int i=0; i<10; i++){
    //     cin >> a;
    //     sum+=a;
    // }

    // cout << sum;

    return 0;
}