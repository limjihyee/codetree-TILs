#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int max = arr[0];

    for(int i=1; i<n; i++){
        if(max != arr[i]){ // max와 a[i] 값이 다를 때
            if(max < arr[i]){ // 심지어 a[i] 값이 더 클 때, max 값 변경
                max = arr[i];
            }
        }
        else{
            // 만약에 max랑 a[i] 현재 값이 같아 중복되면 상관없이 max 변경
            max = arr[i+1];
        }
    }

    cout << max;

    return 0;
}