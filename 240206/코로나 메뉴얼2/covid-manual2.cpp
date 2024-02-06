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


// 코드트리 풀이
// #include <iostream>

// using namespace std;

// int main() {
// 	// 카운팅 배열의 1에는 A인 사람의 수가, 2에는 B가, 3에는 C가, 4에는 D가 들어감
// 	int count_arr[5] = {};
// 	// type num = 분류 번호
// 	int type_num = 0;
// 	char s;
// 	int t;
	
// 	// s와 t를 입력받은 후 카운팅 배열을 통해 각각의 빈도 저장
// 	for(int i = 0; i < 3; i++) {
// 		cin >> s >> t;

// 		if(t >= 37 && s == 'Y')
// 			type_num = 1;
// 		else if(t >= 37)
// 			type_num = 2;
// 		else if(s == 'Y')
// 			type_num = 3;
// 		else
// 			type_num = 4;
// 		count_arr[type_num]++;
// 	}
	
//     // A부터 D까지 나온 횟수를 출력
//     for(int i = 1; i <= 4; i++) {
//         cout << count_arr[i] << " ";
//     }
	
// 	if(count_arr[1] >= 2)
// 		cout << "E";

//     return 0;
// }