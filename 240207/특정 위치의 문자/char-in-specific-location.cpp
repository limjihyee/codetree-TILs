#include <iostream>
using namespace std;

int main() {
    
    char word[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char c;

    cin >> c;

    // 해당 문자를 찾지 못한다면 -1
    int idx = -1;

    for(int i=0; i<6; i++){
        if(c == word[i]){
            idx = i;
        }
    }

    // 문자가 존재하지 않는 경우
    if(idx == -1){
        cout << "None";
    }
    else{
        cout << idx;
    }

    return 0;
}