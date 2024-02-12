#include <iostream>
using namespace std;

int main() {
    int arr[100];
    
    int i=0;
    while(1){
        cin >> arr[i];

        if(arr[i] == 999 | arr[i] == -999){
            break;
        }
        i++; // 위에 999 또는 -999 제외 i의 수
    }

    int max = arr[0];
    int min = arr[0];

    // 가장 큰 숫자
    for(int j=1; j<i; j++){
        if(max < arr[j]){
            max = arr[j];
        }
    }

    // 가장 작은 숫자
    for(int j=1; j<i; j++){
        if(min > arr[j]){
            min = arr[j];
        }
    }

    cout << max << " " << min;
    
    return 0;
}