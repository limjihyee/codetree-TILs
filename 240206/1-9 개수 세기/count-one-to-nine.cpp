#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];

    for(int i=0; i<n; i++){ // 숫자 입력
        cin >> arr[i];
    }


    for(int i=1; i<=9; i++){
        int cnt = 0; // 숫자 하나씩 i 바뀔 때마다 다시 count
        for(int j=0; j<n; j++){
            if(i == arr[j]){
                cnt++;
            }
        }
        cout <<  cnt << endl;
    }

    return 0;
}