#include <iostream>
using namespace std;

int main() {
    
    int a[100]; // 100 명의 학생 점수 담을 배열

    // 입력
    int i=0;
    while(1){
        cin >> a[i];

        if(a[i] == 0){
            break;
        }
        i++;
    }

    // 출력
    for(int j=10; j>=1; j--){
        int cnt = 0; // j가 바뀔 때마다 cnt 0으로 바뀜
        for(int k=0; k<i; k++){
            if(a[k] >= 10){
                if(j == a[k] / 10){
                cnt++;
                }
            }
        }
        cout << j * 10 << " - " << cnt << endl;
    }

    return 0;
}