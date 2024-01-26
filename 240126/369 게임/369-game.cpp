#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i%3==0 || (i-3)%10 == 0 || (i-6)%10 == 0 || (i-9)%10 == 0){
            cout << 0 << " ";
        }
        else {
            if((i>=30 && i<40) || (i>=60 && i<70) || (i>=90 && i<100) ){ // 3, 6, 9의 배수
            cout << 0 << " ";
            }
            else cout << i << " ";
        }
    }

    return 0;
}

    // 아래는 해설 (코드트리 풀이)
    // 출력
	// for(int i = 1; i <= n; i++) {
	// 	if(i % 3 == 0)
	// 		cout << "0 ";
	// 	else if(i % 10 == 3 || i % 10 == 6 || i % 10 == 9)  // 나머지가 3 6 9인 경우
	// 		cout << "0 ";
	// 	else if(i / 10 == 3 || i / 10 == 6 || i / 10 == 9)  // 몫이 3 6 9인 경우
	// 		cout << "0 ";
	// 	else
	// 		cout << i << " ";
	// }