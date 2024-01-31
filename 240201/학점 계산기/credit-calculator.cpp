#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double a[100];
    double sum = 0;
    
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }

    cout << fixed;
    cout.precision(1);

    double aver = sum/n;
    cout << aver << endl;

    if(aver >= 4.0){
        cout << "Perfect";
    }
    else if(aver >= 3.0){
        cout << "Good";
    }
    else
    cout << "Poor";

    return 0;
}