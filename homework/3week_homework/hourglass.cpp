#include <iostream>
using namespace std;

int main(){

    int k, n;
    cin >> k;

    for (int i =0; i<k; i++){
        if (k>i*2){
            for (int j =0; j<i; j++){
                cout << "-";
            }
            for (int j =0; j<k-2*i; j++){
                if(j%2==0){
                    cout << "*";
                }
                else{
                    cout <<"+";
                }
            }
            for (int j=0; j<i; j++){
                cout << "-";
            }
        }
        else{
            n=k-i-1;
            for (int j =0; j<n; j++){
                cout << "-";
            }
            for (int j =0; j<k-2*n; j++){
                if(j%2==0){
                    cout << "*";
                }
                else{
                    cout <<"+";
                }
            }
            for (int j=0; j<n; j++){
                cout << "-";
            }
        }
        cout << "\n";
    }
    
    return 0;
}