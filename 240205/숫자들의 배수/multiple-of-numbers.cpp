#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a; // 정수 한 개 입력

    int arr[10]; // 출력 배열 (곱하기니까 5, 10 곱하면 10 이하면 됨)

    int cnt=0;

    for(int i=0; i<10; i++){
        arr[i] = a * (i+1); // 각 배열 안에 값 할당

        cout << arr[i] << " ";

        if(arr[i] % 5 ==0 ){ // 5의 배수이면
            cnt++;

            if(cnt ==2){ // 5의 배수가 2개가 되면 for문 탈출
                break;
            }
        }
    }

    return 0;
}