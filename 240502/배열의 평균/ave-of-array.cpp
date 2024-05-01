#include <iostream>
using namespace std;

int main() {
    int arr[2][4];

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    cout << fixed;
    cout.precision(1);

    // 가로 평균

    for(int i=0; i<2; i++){
        int rowSum = 0;
        for(int j=0; j<4; j++){
            rowSum += arr[i][j];
        }
        cout << (double)rowSum / 4 << " ";
    }

    cout << endl;

    // 세로 평균
    for(int i=0; i<4; i++){
        int colSum = 0;
        for(int j=0; j<2; j++){
            colSum += arr[j][i];
        }
        cout << colSum /2.0 << " ";
    }

    cout << endl;
    
    // 전체 평균
    int total = 0;
    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            total += arr[i][j];
        }
    }
    cout << total /8.0;

    return 0;
}