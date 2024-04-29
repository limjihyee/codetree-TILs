#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int arr[n];

    // n개의 숫자 입력
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }


    // q개의 질의
    int question;
    for(int i=0; i<q; i++){
        cin >> question;

        if(question == 1){
            int a;
            cin >> a;
            cout << arr[a-1] << endl;
        }
        else if(question == 2){
            int b;
            cin >> b;
            int same;

            for(int j=0; j<n; j++){
                if(arr[j] == b){
                    same = j+1;
                    break;
                }
                else{
                    same = 0;
                }
            }

            cout << same << endl;

        }
        else if(question == 3){
            int s, e;
            cin >> s >> e;

            for(int j=s-1; j<e; j++){
                cout << arr[j] << " ";
            }
        }      
    }
    
    return 0;
}