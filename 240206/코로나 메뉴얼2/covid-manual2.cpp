#include <iostream>
using namespace std;

int main() {
    char a[3]; // 감기 증상 배열
    int b[3]; // 체온 배열

    // 입력
    for(int i=0; i<3; i++){
        cin >> a[i] >> b[i];
    }

    // 출력
    int cnt =0; // A
    int cnt2 = 0; // C 
    int cnt3 = 0; // B 
    int cnt4 = 0; // D

    for(int i=0; i<3; i++){
        if(a[i] == 'Y'){ // 증상 있음
            if(b[i] >= 37){
                cnt++;
            }
            else{ // 증상은 있지만 체온 정상
                cnt2++;
            }
        }
        else{ // 증상 없음
            if(b[i] >= 37){
                cnt3++;
            }
            else{
                cnt4++;
            }
        }
    }

    cout << cnt << " " << cnt3 << " " << cnt2 << " " << cnt4 << " ";

    if(cnt >=2){
        cout << 'E';
    }

    return 0;
}