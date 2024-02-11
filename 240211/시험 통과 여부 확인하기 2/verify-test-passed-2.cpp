#include <iostream>
using namespace std;

int main() {
    
    int a;
    cin >> a;

    int sum[10]; // 10명 미만의 학생들의 점수 저장

    int cnt = 0; // 통과한 사람 

    for(int j=0; j<a; j++){
        for(int i=0; i<4; i++){
        int exam[4];
        cin >> exam[i];

        sum[j] += exam[i];
        }

        if(sum[j]/4 >= 60){
            cout << "pass" << endl;
            cnt++;
        }
        else
            cout << "fail" << endl;
    }

    cout << cnt;

    return 0;
}