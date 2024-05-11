#include <iostream>
using namespace std;
#include <algorithm> // 오름차순 정렬을 위해 추가

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // 오름차순
    sort(arr, arr+n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;


    // 내림차순
    for(int i=n-1; i>=0; i--){
        cout << arr[i] << " ";
    }

    return 0;
}