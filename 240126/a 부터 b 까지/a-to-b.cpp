#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int i = a;
    cout << i << " ";
    while(i<b){
        if(i%2==1){
            i*=2;
            if(i<b){
             cout << i << " ";
            }
        }
        else{
            i+=3;
            if(i<b){
             cout << i << " ";
            }
        }
    }

    return 0;
}