#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int cnt_a, cnt_b, cnt_c; // 각각 교실 청소, 복도 청소, 화장실 청소이다. (실제 실행)
    cnt_a=0;
    cnt_b=0;
    cnt_c=0;

    for(int i=1; i<=n; i++){

        if(i%12==0){
            cnt_c++;
        }
        else if(i%3==0){
            cnt_b++;
        }
        else if(i%2==0){
            cnt_a++;
        }
    }
    cout << cnt_a << " " << cnt_b << " " << cnt_c;
    
    return 0;
}