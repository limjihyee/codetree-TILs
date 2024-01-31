#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    int cnt=0;

    for(int i=start; i<=end; i++){
        int sum = 0;
        for(int k=1; k<i; k++){ // 자기 자신 제외한 약수들 찾기
            if(i%k==0){
                sum+=k;                
            }
        }
        if(i==sum) 
            cnt++;
    }

    cout << cnt;

    return 0;
}