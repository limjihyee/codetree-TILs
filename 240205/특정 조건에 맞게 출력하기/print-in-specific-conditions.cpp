#include <iostream>
using namespace std;

int main() {
    int a[100];

    int i=0;
    int cnt = 0;
    while(1){
        cin >> a[i];

        if(a[i] == 0){
            break;
        }
        i++;
        cnt++; // 0 입력 전까지 입력된 수
    }

    for(int j=0; j<cnt; j++){
        if(a[j] % 2 ==1){
            cout << a[j] +3 << " ";
        }
        else{
            cout << a[j] / 2 << " ";
        }
    }
    
    return 0;
}