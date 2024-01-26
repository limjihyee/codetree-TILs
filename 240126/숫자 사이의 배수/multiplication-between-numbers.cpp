#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int sum = 0;
    int cnt = 0;
    float aver = 0;

    for(int i=a; i<=b; i++){
        if(i%5==0 || i%7==0){
            sum+=i;
            cnt++;
        }
    }
    aver = (float)sum/cnt;

    cout << sum << " ";

    cout << fixed;
    cout.precision(1);

    cout << aver;

    return 0;
}