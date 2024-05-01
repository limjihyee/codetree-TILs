#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    
    int arr[100];

    //입력
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // 출력
    int max, min;

    // max와 min 할당
    for(int i=0; i<n; i++){
        // 500 초과의 수 중 가장 작은 수
        if(arr[i] > 500){
            min = arr[i];
        }

        // 500 미만의 수 중 가장 큰 수
        if(arr[i] < 500){
            max = arr[i];
        }
    }

    for(int i=0; i<n; i++){
        // 500 초과의 수 중 가장 작은 수
        if(arr[i] > 500){
            if(min > arr[i]){
                min = arr[i];
            }
        }

        // 500 미만의 수 중 가장 큰 수
        if(arr[i] < 500){
            if(max < arr[i]){
                max = arr[i];
            }
        }
    }

    cout << max << " " << min;

    return 0;
}