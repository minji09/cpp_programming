#include <iostream>
using namespace std;

int main(){
    
    int n,m;
    cin>> n;

    for (int i = 0; i<n; i++){
        if(n>i*2){
            for (int j = 0; j<(n-2*i)/2; j++){
                cout << "*";
            }
            for (int j = 0; j<2*i+1; j++ ){
                cout << "+";
            }
            for (int j = 0; j<(n-2*i)/2; j++){
                cout << "*";
            }
            cout << "\n";
        }
        else{
            m = n-i-1;
            for (int j = 0; j<(n-2*m)/2; j++){
                cout << "*";
            }
            for (int j = 0; j<2*m+1; j++ ){
                cout << "+";
            }
            for (int j = 0; j<(n-2*m)/2; j++){
                cout << "*";
            }
            cout << "\n";

        }

    }

    return 0;
}