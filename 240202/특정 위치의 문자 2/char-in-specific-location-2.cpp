#include <iostream>
using namespace std;

int main() {
    char a[10];

    for(int i=0; i<10; i++){
        cin >> a[i];
    }

    for(int i=1; i<10; i+=3){
        cout << a[i] << " ";
    }

    return 0;
}