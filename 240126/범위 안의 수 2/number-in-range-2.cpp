#include <iostream>
using namespace std;

int main() {
    
    int sum=0;
    int cnt=0;
    float aver = 0;

    for(int i=1; i<=10; i++){
        int k;
        cin >> k;

        if(k>=0 && k<=200){
            sum+=k;
            cnt++;
        }
    }
    aver = (float)sum/cnt;
    cout << fixed;
    cout.precision(1);

    cout << sum << " " << aver;

    return 0;
}