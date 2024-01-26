#include <iostream>
using namespace std;

int main() {

    int sum=0;
    float aver=0;
    int cnt=0;
    for(;;){
        int k;
        cin >> k;

        if(k<=19 || k>=30){
            break;
        }
        else{
            sum += k;
            cnt++;
        }
    }
    aver = (float)sum/cnt;

    cout << fixed;
    cout.precision(2);
    cout << aver;

    return 0;
}