#include <iostream>
using namespace std;

int main() {

    for(;;){
        int k;
        cin >> k;

        if(k>25){
            cout << "Lower" << endl;
        }
        else if(k<25){
            cout << "Higher" << endl;
        }
        else {
            cout << "Good" << endl;
            break;
        }
    }

    return 0;
}