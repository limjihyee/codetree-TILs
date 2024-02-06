#include <iostream>
using namespace std;

int main() {
    int a[100]; // 입력 배열

    int i=0;
    int cnt = 0;
    while(1){
        cin >> a[i];

        if(a[i] == 0){
            break;
        }
        i++;
        cnt++; // 입력 몇 개 받았는가
    }

    // 출력
    for(int j=1; j<=9; j++){
        int count = 0; // j 바뀔 떄마다 다시 0으로 카운트
        for(int k=0; k<cnt; k++){
            if(j == a[k] / 10){
                count++;
            } 
        }
        cout << j << " - " << count << endl;
    }

    return 0;
}