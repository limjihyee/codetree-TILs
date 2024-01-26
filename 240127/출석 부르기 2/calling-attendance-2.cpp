#include <iostream>
using namespace std;

int main() {
    for(;;){
        int k;
        cin >> k;

        if(k==1){
            cout << "John" << endl;
        }
        else if(k==2){
            cout << "Tom" << endl;
        }
        else if(k==3){
            cout << "Paul" << endl;
        }
        else if(k==4){
            cout << "Sam" << endl;
        }
        else{
            cout << "Vacancy" << endl;
            break;
        }
    }
    
    return 0;
}