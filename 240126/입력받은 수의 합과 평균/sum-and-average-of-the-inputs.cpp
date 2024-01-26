#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum=0;
    int cnt = 0;
    float aver =0;

    for(int i=1; i<=n; i++){
        int k;
        cin >> k;

        sum+=k;
        cnt++;
    }
    aver = (float)sum/cnt;

    cout << fixed;
    cout.precision(1);

    cout << sum << " " << aver;

    return 0;
}