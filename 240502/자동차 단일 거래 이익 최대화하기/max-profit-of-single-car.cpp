#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000];
    
    //입력
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // 출력
    int max = arr[1] - arr[0];

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(max < arr[j] - arr[i]){
                max = arr[j] - arr[i];
            }
        }
    }


    if(max > 0){
        cout << max;
    }
    else{
        cout << 0;
    }

    return 0;
}