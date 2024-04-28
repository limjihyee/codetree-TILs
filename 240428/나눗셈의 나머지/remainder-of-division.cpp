#include <iostream>
using namespace std;

int main() {
    int a, b, i, sum2;
    int sum[100] = {0};
    int arr[100] = {0};
    sum2 = 0;
    i = 0;

    cin >> a >> b;

    while(1)
    {
        if(a <= 0){
            break;
        }
        sum[i] = a%b;
        a /= b;
        arr[sum[i]]++;
        i++;
    }

    for(i=0; i<=9; i++){
        sum2 += arr[i] * arr[i];
    }

    cout << sum2;

    return 0;
}