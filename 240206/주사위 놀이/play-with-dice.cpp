#include <iostream>
using namespace std;

int main() {
    
    int arr[10];

    for(int i=0; i<10; i++){ // 입력
        cin >> arr[i];
    }

    // 출력 횟수
    for(int i=1; i<=6; i++){
        int cnt = 0; 
        for(int j=0; j<10; j++){
            if(i == arr[j]){
                cnt++;
            }
        }
        cout << i << " - " << cnt << endl;
    }

    return 0;
}