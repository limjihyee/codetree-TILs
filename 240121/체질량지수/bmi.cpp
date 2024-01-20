#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int kg, cm;

    cin >> cm >> kg;

    int BMI = (kg*10000)/(cm*cm);
    cout << BMI <<endl;

    if(BMI >= 25){
        cout << "Obesity";
    }
    return 0;
}